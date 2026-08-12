# ModeAdjust AI Review Setup Guide

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
