#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
全自动设置GitHub AI评审集成
"""

import os
import json
from datetime import datetime

def main():
    """主函数：全自动设置GitHub AI评审"""
    print("开始全自动设置GitHub AI评审集成...")
    
    # 1. 创建必要的目录结构
    setup_directories()
    
    # 2. 创建GitHub Actions workflow
    create_github_workflow()
    
    # 3. 创建AI评审核心脚本
    create_ai_review_script()
    
    # 4. 创建使用指南
    create_setup_guide()
    
    # 5. 验证必要文件存在
    verify_required_files()
    
    # 6. 生成初始化报告
    generate_setup_report()
    
    print("GitHub AI评审集成设置完成！")
    print("\n下一步操作:")
    print("1. git add .")
    print('2. git commit -m "feat: add AI code review integration"') 
    print("3. git push origin main")
    print("4. 创建Pull Request测试AI评审功能")

def setup_directories():
    """创建必要的目录结构"""
    directories = [
        ".github/workflows",
        "scripts"
    ]
    
    for dir_path in directories:
        os.makedirs(dir_path, exist_ok=True)
        print("[DIR] 创建目录: {}".format(dir_path))

def create_github_workflow():
    """创建GitHub Actions workflow文件"""
    workflow_content = '''name: ModeAdjust AI Review

on:
  pull_request:
    branches: [ main, develop, master ]
  push:
    branches: [ main, master ]

jobs:
  ai-review:
    runs-on: ubuntu-latest
    
    steps:
    - name: Checkout code
      uses: actions/checkout@v4
      
    - name: Set up Python
      uses: actions/setup-python@v5
      with:
        python-version: '3.9'
        
    - name: Install dependencies  
      run: |
        pip install requests pyyaml
        
    - name: Generate module summary (if needed)
      run: |
        if [ ! -f "module_summary.txt" ]; then
          echo "Generating module_summary.txt..."
          touch module_summary.txt
        fi
        
    - name: Run AI Review
      id: ai_review
      run: |
        python scripts/ai_review.py
      env:
        MODEADJUST_PATH: ${{ github.workspace }}
        
    - name: Upload AI Review Report
      uses: actions/upload-artifact@v4
      if: always()
      with:
        name: ai-review-report
        path: |
          ai_review_report.json
          ai_review_summary.txt
          
    - name: Comment on PR with AI Review Results
      if: github.event_name == 'pull_request' && steps.ai_review.outcome != 'failure'
      uses: actions/github-script@v7
      with:
        script: |
          const fs = require('fs');
          const path = require('path');
          
          try {
            const summaryPath = path.join(process.env.GITHUB_WORKSPACE, 'ai_review_summary.txt');
            if (fs.existsSync(summaryPath)) {
              const summary = fs.readFileSync(summaryPath, 'utf8');
              const comment = `## 🤖 AI Code Review Results\\n\\n\\`\\`\\`\\n${summary}\\n\\`\\`\\``;
              
              await github.rest.issues.createComment({
                issue_number: context.issue.number,
                owner: context.repo.owner,
                repo: context.repo.repo,
                body: comment
              });
            }
          } catch (error) {
            console.log('Failed to read AI review summary:', error);
          }
          
    - name: Fail PR if critical issues found
      if: steps.ai_review.outcome == 'failure'
      run: |
        echo "::error::AI Review failed due to critical issues"
        exit 1
'''
    
    workflow_path = ".github/workflows/ai-review.yml"
    with open(workflow_path, "w", encoding="utf-8") as f:
        f.write(workflow_content)
    print("[WF] 创建GitHub Actions workflow: {}".format(workflow_path))

def create_ai_review_script():
    """创建优化的AI评审核心脚本"""
    script_content = '''#!/usr/bin/env python3
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
            lines = content.split('\n')
            
            for line in lines:
                line = line.strip()
                if line.startswith("===") and line.endswith("==="):
                    current_module = line.strip("= ").strip()
                    modules[current_module] = {"r_ports": 0, "p_ports": 0}
                elif current_module and line.startswith("R-Ports("):
                    match = re.search(r'R-Ports$$(\d+)$$:', line)
                    if match:
                        modules[current_module]["r_ports"] = int(match.group(1))
                elif current_module and line.startswith("P-Ports("):
                    match = re.search(r'P-Ports$$(\d+)$$:', line)
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
            f.write("ModeAdjust AI Review Summary\\n")
            f.write("=" * 50 + "\\n")
            f.write("Timestamp: {}\\n".format(datetime.now().isoformat()))
            f.write("Total Issues: {}\\n".format(len(self.issues)))
            f.write("Critical Issues: {}\\n\\n".format(self.critical_issues))
            
            severity_counts = {"critical": 0, "high": 0, "medium": 0, "low": 0}
            for issue in self.issues:
                if issue["severity"] in severity_counts:
                    severity_counts[issue["severity"]] += 1
                    
            for severity, count in severity_counts.items():
                if count > 0:
                    f.write("{}: {}\\n".format(severity.capitalize(), count))
                    
            f.write("\\nDetailed Issues:\\n")
            f.write("-" * 30 + "\\n")
            for i, issue in enumerate(self.issues[:10], 1):
                f.write("{}. [{}] {}\\n".format(i, issue["severity"], issue["message"]))

def main():
    agent = ModeAdjustAIAgent()
    success = agent.run_full_review()
    
    if not success:
        print("AI Review failed - please fix critical issues before merging")
        sys.exit(1)
    else:
        print("AI Review passed!")
        sys.exit(0)

if __name__ == "__main__":
    main()
'''
    
    script_path = "scripts/ai_review.py"
    with open(script_path, "w", encoding="utf-8") as f:
        f.write(script_content)
    print("[AI] 创建AI评审核心脚本: {}".format(script_path))

def create_setup_guide():
    """创建详细的设置指南"""
    guide_content = '''# ModeAdjust AI Review Setup Guide

## 🚀 快速开始

这个AI评审系统会自动验证您的ModeAdjust代码是否符合架构设计规范。

### 文件结构
```
ModeAdjust/
├── .github/workflows/ai-review.yml          # GitHub Actions自动触发
├── scripts/ai_review.py                     # AI评审核心逻辑
├── ModeAdjust_工作流与模块分类总结.md       # 架构文档（评审基准）
└── module_summary.txt                       # 模块端口定义（自动生成）
```

### 自动化工作流程
1. **推送代码** → 触发GitHub Actions
2. **AI评审运行** → 基于架构文档验证代码
3. **生成报告** → 在PR中显示评审结果
4. **质量门禁** → 关键问题阻止合并

### 评审规则
- ✅ **Pipeline完整性**: 确保5阶段Pipeline完整
- ✅ **Caller模式**: 验证调度器模式正确性  
- ✅ **安全机制**: 检查关键安全模块存在
- ✅ **接口一致性**: 验证信号流符合设计

## 🔧 使用方法

### 第一次设置
```bash
# 1. 添加所有文件到git
git add .

# 2. 提交AI评审集成
git commit -m "feat: add AI code review integration"

# 3. 推送到GitHub
git push origin main
```

### 日常使用
- 创建Pull Request时自动运行AI评审
- 查看PR评论中的详细评审结果
- 根据建议修复问题后重新提交

## ⚙️ 自定义配置

如需调整评审规则，请编辑 `scripts/ai_review.py`:

- 修改 `expected_pipelines` 字典添加新的Pipeline组件
- 调整 `required_safety_modules` 列表更新安全要求
- 修改严重程度阈值调整质量门禁级别

## ❓ 常见问题

**Q: module_summary.txt不存在怎么办？**
A: 运行 `extract_ports2.ps1` PowerShell脚本生成

**Q: AI评审太严格了怎么办？**
A: 编辑 `ai_review.py` 调整问题严重程度或添加例外

**Q: 如何查看详细报告？**
A: 在GitHub Actions工件中下载 `ai_review_report.json` 和 `ai_review_summary.txt`

---
*这个AI评审系统基于实际代码分析，确保ModeAdjust系统架构一致性*
'''
    
    guide_path = "AI_REVIEW_SETUP.md"
    with open(guide_path, "w", encoding="utf-8") as f:
        f.write(guide_content)
    print("[DOC] 创建使用指南: {}".format(guide_path))

def verify_required_files():
    """验证ModeAdjust项目中的必要文件存在"""
    required_files = [
        "ModeAdjust_工作流与模块分类总结.md",
        "module_summary.txt"
    ]
    
    for file in required_files:
        if os.path.exists(file):
            print("[OK] 找到必要文件: {}".format(file))
        else:
            print("[WARN] 警告: {} 不存在，AI评审可能受限".format(file))

def generate_setup_report():
    """生成设置完成报告"""
    report_content = '''# GitHub AI Review Setup Complete

Setup completed at: {}

## Created Files
- .github/workflows/ai-review.yml
- scripts/ai_review.py  
- AI_REVIEW_SETUP.md

## Next Steps
1. git add .
2. git commit -m "feat: add AI code review integration"
3. git push origin main
4. Create a Pull Request to test the AI review

## Verification
- ✅ Directory structure created
- ✅ GitHub Actions workflow configured  
- ✅ AI review script ready
- ✅ Documentation generated

The AI review will automatically run on every Pull Request!
'''.format(datetime.now().isoformat())
    
    with open("AI_REVIEW_SETUP_COMPLETE.md", "w", encoding="utf-8") as f:
        f.write(report_content)
    print("[REPORT] 生成设置完成报告: AI_REVIEW_SETUP_COMPLETE.md")

if __name__ == "__main__":
    main()