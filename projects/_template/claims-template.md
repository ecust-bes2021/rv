# <项目名> 静态疑点清单（claims）

> 每个疑点一条。静态分析只能到此为止（status=needs_review），交给 ARTEX 动态验证后回填结论。
> 完整样例：`..\water_elec\apk-five-claims.md`

## <n>. <疑点标题>
- **severity**: high / medium / low
- **status**: needs_review
- **静态证据**：（文件、类名、函数、字符串、地址——必须可复查）
- **证据链断点（proof_gaps）**：（静态推不到结论的地方；动态验证要补什么实验）
- **动态验证结论**：（ARTEX 任务完成后回填：证实存在 / 未证实 / 已证伪 + task/finding 编号）