$root = "c:\1work_project\6-557\Model\ModeAdjust"
$outFile = Join-Path $root "module_summary.txt"

"" | Out-File $outFile -Encoding UTF8

function Extract-Ports($dirPath) {
    $arxml = Get-ChildItem -Path $dirPath -Filter "*_swc.arxml" -ErrorAction SilentlyContinue | Select-Object -First 1
    if (-not $arxml) { return $null }
    
    $content = Get-Content $arxml.FullName -Raw
    
    $pports = @()
    $rports = @()
    
    $pMatches = [regex]::Matches($content, '<P-PORT-PROTOTYPE[^>]*>\s*<SHORT-NAME>([^<]+)</SHORT-NAME>')
    foreach ($m in $pMatches) { $pports += $m.Groups[1].Value }
    
    $rMatches = [regex]::Matches($content, '<R-PORT-PROTOTYPE[^>]*>\s*<SHORT-NAME>([^<]+)</SHORT-NAME>')
    foreach ($m in $rMatches) { $rports += $m.Groups[1].Value }
    
    # Extract event type
    $eventType = "Unknown"
    if ($content -match 'TIMING-EVENT') { $eventType = "TimingEvent" }
    elseif ($content -match 'OPERATION-INVOKED-EVENT') { $eventType = "OpInvoked" }
    
    # Extract called operations (R-Port client calls with .Cal pattern)
    $calledOps = @()
    $calMatches = [regex]::Matches($content, '<R-PORT-PROTOTYPE[^>]*>\s*<SHORT-NAME>([^<]+)</SHORT-NAME>[^<]*<[^>]*>[^<]*<REQUIRED-INTERFACE-REF[^>]*>([^<]*)</REQUIRED-INTERFACE-REF>')
    foreach ($m in $calMatches) { $calledOps += $m.Groups[1].Value }
    
    return @{
        PPorts = $pports
        RPorts = $rports
        EventType = $eventType
        CalledOps = $calledOps
    }
}

function Write-ModuleInfo($name, $result, $outFile) {
    "=== $name ===" | Out-File $outFile -Append -Encoding UTF8
    "  EventType: $($result.EventType)" | Out-File $outFile -Append -Encoding UTF8
    "  P-Ports($($result.PPorts.Count)):" | Out-File $outFile -Append -Encoding UTF8
    foreach ($p in $result.PPorts) {
        "    OUT: $p" | Out-File $outFile -Append -Encoding UTF8
    }
    "  R-Ports($($result.RPorts.Count)):" | Out-File $outFile -Append -Encoding UTF8
    foreach ($r in $result.RPorts) {
        "    IN: $r" | Out-File $outFile -Append -Encoding UTF8
    }
    "" | Out-File $outFile -Append -Encoding UTF8
}

# Process ModeAdjustNewArch
"========== ModeAdjustNewArch ==========" | Out-File $outFile -Append -Encoding UTF8
$dirs = Get-ChildItem -Path (Join-Path $root "ModeAdjustNewArch") -Directory | Sort-Object Name
foreach ($dir in $dirs) {
    $result = Extract-Ports $dir.FullName
    if ($result) { Write-ModuleInfo $dir.Name $result $outFile }
}

# Process ModeStatAndRspNewArch
"========== ModeStatAndRspNewArch ==========" | Out-File $outFile -Append -Encoding UTF8
$dirs2 = Get-ChildItem -Path (Join-Path $root "ModeStatAndRspNewArch") -Directory -ErrorAction SilentlyContinue | Sort-Object Name
foreach ($dir in $dirs2) {
    $result = Extract-Ports $dir.FullName
    if ($result) { Write-ModuleInfo $dir.Name $result $outFile }
}

# Process ModeAdjustPre
"========== ModeAdjustPre ==========" | Out-File $outFile -Append -Encoding UTF8
$dirs3 = Get-ChildItem -Path (Join-Path $root "ModeAdjustPre") -Directory -ErrorAction SilentlyContinue | Sort-Object Name
foreach ($dir in $dirs3) {
    $result = Extract-Ports $dir.FullName
    if ($result) { Write-ModuleInfo $dir.Name $result $outFile }
}

# Process other top-level dirs
"========== Other ==========" | Out-File $outFile -Append -Encoding UTF8
foreach ($dname in @("StNumChk", "ThdRwStOccupyChk", "SBC")) {
    $dpath = Join-Path $root $dname
    if (Test-Path $dpath) {
        $result = Extract-Ports $dpath
        if ($result) { Write-ModuleInfo $dname $result $outFile }
    }
}

# Also extract top-level arxml
$result = Extract-Ports $root
if ($result) { 
    "========== Top Level ==========" | Out-File $outFile -Append -Encoding UTF8
    Write-ModuleInfo "ModeAdjust" $result $outFile 
}

Write-Host "Done. Output: $outFile"
