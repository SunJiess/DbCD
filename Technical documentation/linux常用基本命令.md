## 知识清单  
### 1. linux基本命令（命令输入后按 Enter 键即可执行）
- cd命令：
>- cd     ：返回到Home目录
>- cd ..  ：返回到上一级目录
>- cd -   ：返回到上次目录
>- cd 文件名 ：到指定文件（该文件必须为当前文件目录的子目录）的目录下
- 基本文件操作：
>- touch 新文件名 ：文件的创建
>- cp file file1 ：文件的复制
>- mv file file2 ：文件的移动
>- cat 文件名 ：查看文件内容
>- ls -al . ：列出文件列表

- 基本目录操作：
>- mkdir dir ：目录的创建
>- cp dir   dir1  -a ：目录的复制
>- mv dir  dir2 ：目录的移动
>- rm  dir  -rf ：目录的删除
>- ls -d  dir ：查找目录
>- find  ./dir  -name ：列出目录列表

- 文件的压缩
>- gzip  filename ：对文件的压缩
>- gunzip filename ：对文件的解压缩
>- tar czvf  file.tar.gz dir ：对目录中的文件进行压缩
