### 3. 仓库的建立与使用
- 初始化（将文件夹变为一个仓库）
```
git init
```
- 查看当前状态
```
git status
```
- 添加到仓库中（若在仓库中对文件进行创建-修改-删除时有效）
```
git add 文件名
```
- 提交内容（同上）
```
git commit -a  -m  "对提交的内容进行概要描述，以便日后查看"
```
- 若是第一次提交，则需要配置用户信息
```
git config --global user.email

git config --global user.name
```
- 查看日志（显示提交的简要信息）
```
git log
```
- 添加远程仓库，并将远程仓库信息更新到本地
```
git remote add origin url

git fetch origin 
```
- 同步
```
从本地同步到服务器
git push origin master

从服务器同步到本地
git pull origin master

```
- 查看同步是否成功
```
git branch -av
```
