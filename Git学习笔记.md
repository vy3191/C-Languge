# Git学习笔记

为了记录下自己写的代码，欲使用GitHub版本控制器，故学习Git的命令。此学习笔记基本按照廖雪峰老师的Git教程思路来的，iOS端有廖老师的Git教程APP下载，6元入手，确实是见过的最好Git教程。[网页端教程](https://www.liaoxuefeng.com/wiki/0013739516305929606dd18361248578c67b8067c8c017b000)

## Git简介

现在对于GitHub和Git的关系还有点分不清。世上有一种软件，叫做版本控制系统。在完成一个项目（可能是你一个人完成的也可能是多人协作）的过程中，对项目文件的更改以及回退，那么每次更改都产生一个新版本，自己管理版本的改动还好说，有一个人对文件有更改，那么其他成员就得找出更改的内容以及更改自己手中也有一份的相应文件内容，在这个过程中会浪费精力以及由于失误产生很多错误，造成不必要的损失，所以有版本控制系统的诞生。Linux系统便是由全世界的开发者一同开发完善的，在此过程中产生大量的代码，故需要很好的版本控制系统来管理代码，Git便诞生了。

### 分布式和集中式版本控制系统

目前有以上两种版本控制系统，集中式版本控制系统拥有一台中央服务器，每个人对文件的改动都上传到服务器，当然也需要下载文件。而分布式版本控制则是在每个人的电脑上都有一份文件，每个人只需要在自己的文件库里对文件进行更改，每个人对文件的改动信息通过网络发送给他人。Git就是一种分布式版本控制系统。

## Windows下Git的安装

在Git的官网下载Git_64位（需翻墙），一路Next安装完毕。安装完成后任意位置右键Git Bash here。启动Git Bash窗口。在命令行输入以下代码：
```git
$ git config --global user.name "Your Name"
$ git config --global user.email "email@example.com"
```
我的简单理解为：对Git进行全局配置，在电脑上创建的仓库你都可以用你的个人信息登陆。

## 创建仓库

Git配置好后，相当于在你的电脑上安置了一个管理员，你需要创建仓库让管理员来管理，之前的Git全局配置可以理解为让管理员认识你。创建仓库的步骤为：

1. 新建一个文件夹
2. 对文件夹进行配置

这个文件夹就可以由Git管理（类似于同步文件夹一样）。使用以下代码创建一个空目录：
```git
$ mkdir demo
$ cd demo
```
Git的命令和Linux一样，`$ mkdir demo`为：创建一个demo文件夹，`$ cd demo`为切换进该文件夹。
执行第二步，对仓库进行配置：
```git
$ git init
```
执行完上述命令后，窗口会提醒你创建里一个空仓库（empty Git repository），`$ ls -ah`显示
隐藏文件，就会发现多了一个`.git`的文件，这个文件便相当于仓库管理员。
示例：创建一个文本文件，并添加到仓库：
在demo文件夹里新建一个名为：readme.txt的文本文件：
```git
Git is a version control system.
Git is free software.
```

接下来把文本文件添加到仓库。
```git
$ git add readme.txt
```
对文件改动进行注释说明：
```git
$ git commit -m "说明"
```
`$ git add .`是把文件夹下所有文件添加到仓库，`$ git add file1 file2 file3`则为把相应文件添加到仓库。**注意：把文件放进文件夹不代表文件放进了仓库。**可以这样理解：进入仓库需要提交管理员并进行登记（注释）。

## 版本回退

对文件readme.txt进行修改，改为如下形式：
```git
My name is Ryan, I'm from Hunan province.
```
使用`$ git status`查看仓库当前状态（文件的改动和添加）， 出现如下代码：
```git
On branch master
Your branch is up-to-date with 'origin/master'.

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git checkout -- <file>..." to discard changes in working directory)

        modified:   readme.txt

no changes added to commit (use "git add" and/or "git commit -a")
```
说明readme.txt文件进行过修改，但是还没有提交到仓库。
使用`$ git diff`命令（diff = difference）来查看具体的修改内容：
```git
diff --git a/readme.txt b/readme.txt
index d8036c1..c420d75 100644
--- a/readme.txt
+++ b/readme.txt
@@ -1,2 +1,3 @@
 Git is a version control system.
-Git is free software.
\ No newline at end of file
+Git is free software.
+My name is Ryan, I'm from Hunan province.
```
查看改动后再次使用`$ git add`和`$ git commit -m "说明"`提交至仓库。

在使用`$ git add`命令后使用`$ git status`查看仓库状态：
```git
On branch master
Your branch is up-to-date with 'origin/master'.

Changes to be committed:
  (use "git reset HEAD <file>..." to unstage)

        modified:   readme.txt
```
说明更改即将提交（Changes to be committed），再用`$ git commit`。这个过程说明了我们可以经常使用`$ git status`来查看仓库状态。

