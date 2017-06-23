## 使用MySQL Workbench工具进行数据库设计
>1. 创建数据库stu
>2. 创建3表
>>- 学生信息表（information）
>>- 学院信息表（school）
>>- 学生成绩表(score)

#### 学生信息表（information）的设计

| 中文名称 | 字段名称 | 字段类型 | 默认值 | 备注 |
|---------|-----|---------|-------|------|
| 学号 | stuid | int | 不为null | 主码 |
| 姓名 | name | varchar(20) | 不为null | -- |
| 年龄 | age | int | 不为null | -- |
| 性别 | sex | varchar(10) | 不为null | -- |
| 系号 | Id | int | 不为null | 外码 |
| 状态 | state | int |  1  | 1真删/0假删 |

#### 学院信息表（school）的设计

| 中文名称 | 字段名称 | 字段类型 | 默认值 | 备注 |
|---------|-----|---------|-------|------|
| 系号 | Id | int | 不为null | 主码 |
| 工号 | tId | int | 不为null | 主码 |
| 教师 | tname | varchar(20) | 不为null |-- |
| 系名 | dept | varchar(20) | 不为null | -- |


#### 学生成绩表（score）的设计

| 中文名称 | 字段名称 | 字段类型 | 默认值 | 备注 |
|---------|-----|---------|-------|------|
| 学号 | stuid | int | 不为null | 主码 |
| 姓名 | name | varchar(20) | 不为null | -- |
| 课程名 | class | varchar(20) |不为null | -- |
| 课程分数 | core | int |不为null | -- |
