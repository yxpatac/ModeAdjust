#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
ModeAdjust系统AI评审脚本 - GitHub Actions优化版
"""

import os
import json
import re
import sys
from datetime import datetime

class ModeAdjustAIAgent:
    def __init__(self):
        self.architecture_doc = "ModeAdjust_工作流与模块分类总结.md"
        self.module_summary = "module_summary.txt"
        self.issues = []
        self.critical_issues = 0
        
    def run_full_review(self):
        """执行完整的AI评审"""
        print("🤖 Starting ModeAdjust AI Review...")
        
        # 验证必要文件
        if not self._validate_required_files():
            return False
            
        # 执行评审检查
        checks = [
            self._review_pipeline_structure,
            self._review_caller_pattern, 
            self._review_safety_mechanisms,
            self._review_module_interfaces
        ]
        
        for check_func in checks:
            try:
                check_func()
            except Exception as e:
                print("⚠️  Check {} failed: {}".format(check_func.__name__, e))
                continue
                
        # 生成报告
        self._generate_reports()
        
        # 输出结果摘要
        total_issues = len(self.issues)
        print("✅ AI Review completed! Found {} issues ({} critical)".format(total_issues, self.critical_issues))
        
        # GitHub Actions兼容输出
        if self.critical_issues > 0:
            print("::error::ModeAdjust AI Review found {} critical issues".format(self.critical_issues))
            return False
        elif total_issues > 0:
            print("::warning::ModeAdjust AI Review found {} issues".format(total_issues))
            
        return True
        
    def _validate_required_files(self):
        """验证必要文件存在"""
        required_files = [self.architecture_doc, self.module_summary]
        missing_files = []
        
        for file in required_files:
            if not os.path.exists(file):
                missing_files.append(file)
                
        if missing_files:
            error_msg = "Missing required files: {}".format(', '.join(missing_files))
            self.issues.append({
                "type": "missing_files",
                "severity": "critical",
                "message": error_msg
            })
            self.critical_issues += 1
            print("::error::{}".format(error_msg))
            return False
            
        return True
        
    def _review_pipeline_structure(self):
        """评审Pipeline结构完整性"""
        expected_pipelines = {
            "DrvStFt": 5,
            "PassStFt": 5, 
            "PassStBkRecln": 5
        }
        
        modules = self._parse_modules_from_summary()
        actual_modules = set(modules.keys())
        
        for pipeline_prefix, expected_count in expected_pipelines.items():
            expected_modules = [
                "{}EnServer".format(pipeline_prefix),
                "{}HolderChk".format(pipeline_prefix), 
                "{}TrgtPosSelc".format(pipeline_prefix),
                "{}IsPosChk".format(pipeline_prefix),
                "{}Ctrl".format(pipeline_prefix)
            ]
            
            missing_modules = []
            for module in expected_modules:
                if module not in actual_modules:
                    missing_modules.append(module)
                    
            if missing_modules:
                severity = "critical" if len(missing_modules) >= 3 else "high"
                self.issues.append({
                    "type": "incomplete_pipeline",
                    "severity": severity,
                    "message": "Pipeline {} missing {} modules: {}".format(pipeline_prefix, len(missing_modules), ', '.join(missing_modules[:2])),
                    "component": pipeline_prefix
                })
                if severity == "critical":
                    self.critical_issues += 1
                    
    def _review_caller_pattern(self):
        """评审Caller模式一致性"""
        caller_modules = [
            "ModeAdjustCaller", "DrvStCaller", "PassStCaller",
            "SecRwLtStCaller", "ModeStEnCtrlCaller"
        ]
        
        modules = self._parse_modules_from_summary()
        
        for caller in caller_modules:
            if caller in modules:
                p_ports = modules[caller].get("p_ports", 0)
                if p_ports > 0:
                    self.issues.append({
                        "type": "caller_pattern_violation",
                        "severity": "medium",
                        "message": "Caller {} has {} P-Ports (should be 0)".format(caller, p_ports),
                        "module": caller
                    })
                    
    def _review_safety_mechanisms(self):
        """评审安全机制"""
        required_safety_modules = [
            "DrvStFtHolderChk",
            "MdXX_DoneChk", 
            "MotorIsOverMaxPosChk"
        ]
        
        modules = self._parse_modules_from_summary()
        missing_safety = []
        
        for module in required_safety_modules:
            if module not in modules:
                missing_safety.append(module)
                
        if missing_safety:
            self.issues.append({
                "type": "missing_safety_module",
                "severity": "critical", 
                "message": "Missing critical safety modules: {}".format(', '.join(missing_safety[:2])),
                "missing_count": len(missing_safety)
            })
            self.critical_issues += 1
            
    def _review_module_interfaces(self):
        """评审模块接口合理性"""
        modules = self._parse_modules_from_summary()
        
        for module_name, module_info in modules.items():
            r_ports = module_info.get("r_ports", 0)
            p_ports = module_info.get("p_ports", 0)
            
            if r_ports > 150:
                self.issues.append({
                    "type": "excessive_r_ports",
                    "severity": "low",
                    "message": "Module {} has {} R-Ports (unusually high)".format(module_name, r_ports),
                    "module": module_name
                })
            if p_ports > 150:
                self.issues.append({
                    "type": "excessive_p_ports", 
                    "severity": "low",
                    "message": "Module {} has {} P-Ports (unusually high)".format(module_name, p_ports),
                    "module": module_name
                })
                
    def _parse_modules_from_summary(self):
        """从module_summary.txt解析模块信息"""
        modules = {}
        
        if not os.path.exists(self.module_summary):
            return modules
            
        try:
            with open(self.module_summary, 'r', encoding='utf-8', errors='ignore') as f:
                content = f.read()
                
            current_module = None
            lines = content.split('
')
            
            for line in lines:
                line = line.strip()
                if line.startswith("===") and line.endswith("==="):
                    current_module = line.strip("= ").strip()
                    modules[current_module] = {"r_ports": 0, "p_ports": 0}
                elif current_module and line.startswith("R-Ports("):
                    match = re.search(r'R-Ports\((\d+)\):', line)
                    if match:
                        modules[current_module]["r_ports"] = int(match.group(1))
                elif current_module and line.startswith("P-Ports("):
                    match = re.search(r'P-Ports\((\d+)\):', line)
                    if match:
                        modules[current_module]["p_ports"] = int(match.group(1))
                        
        except Exception as e:
            print("⚠️  Failed to parse module summary: {}".format(e))
            
        return modules
        
    def _generate_reports(self):
        """生成评审报告"""
        codequality_issues = []
        for issue in self.issues:
            severity_map = {"critical": "critical", "high": "major", "medium": "minor", "low": "info"}
            codequality_issues.append({
                "description": issue["message"],
                "severity": severity_map.get(issue["severity"], "info"),
                "fingerprint": "modeadjust-{}-{}".format(issue["type"], hash(str(issue)) % 10000),
                "location": {"path": "ModeAdjust.slx", "lines": {"begin": 1, "end": 1}}
            })
            
        with open("ai_review_report.json", "w", encoding='utf-8') as f:
            json.dump(codequality_issues, f, ensure_ascii=False, indent=2)
            
        with open("ai_review_summary.txt", "w", encoding='utf-8') as f:
            f.write("ModeAdjust AI Review Summary\n")
            f.write("=" * 50 + "\n")
            f.write("Timestamp: {}\n".format(datetime.now().isoformat()))
            f.write("Total Issues: {}\n".format(len(self.issues)))
            f.write("Critical Issues: {}\n\n".format(self.critical_issues))
            
            severity_counts = {"critical": 0, "high": 0, "medium": 0, "low": 0}
            for issue in self.issues:
                if issue["severity"] in severity_counts:
                    severity_counts[issue["severity"]] += 1
                    
            for severity, count in severity_counts.items():
                if count > 0:
                    f.write("{}: {}\n".format(severity.capitalize(), count))
                    
            f.write("\nDetailed Issues:\n")
            f.write("-" * 30 + "\n")
            for i, issue in enumerate(self.issues[:10], 1):
                f.write("{}. [{}] {}\n".format(i, issue["severity"], issue["message"]))

def main():
    agent = ModeAdjustAIAgent()
    success = agent.run_full_review()
    
    if not success:
        print("❌ AI Review failed - please fix critical issues before merging")
        sys.exit(1)
    else:
        print("✅ AI Review passed!")
        sys.exit(0)

if __name__ == "__main__":
    main()
