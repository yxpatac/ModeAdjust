$file = "c:\1work_project\6-557\Model\ModeAdjust\module_summary.txt"
$lines = Get-Content $file
$i = 0
foreach ($line in $lines) {
    $i++
    if ($line -match '^=== ') {
        Write-Output "$i : $line"
    }
}
