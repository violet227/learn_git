# GitLearn

<<<<<<< HEAD
1. Learnning GitBase from Liao.
2. Find new res in net.
3. Hope can help other peoples.
4. If you can supplement it, please try to supplement it.
5. You can fork into your github.
=======
![A5nfzR.png](https://s2.ax1x.com/2019/04/08/A5nfzR.png)
>>>>>>> b9663e549c85fc11956ed53785dc724c5762f609


<<<<<<< HEAD
# 贡献方法
1. fork到你的仓库
2. 补充内容到对应的文件(如果没有则新建)
3. 发起`pull request`
4. 实践后没问题会合并到当前仓库
=======
#### 1.创建版本库

初始化一个Git仓库，使用`git init`命令。
添加文件到Git仓库，分两步：
1. 使用命令`git add <file>`，注意，可反复多次使用，添加多个文件；
2. 使用命令`git commit -m <message>`，完成。


要随时掌握工作区的状态，使用`git status`命令。如果`git status`告诉你有文件被修改过，用`git diff`可以查看修改内容


`git log`命令显示从最近到最远的提交日志,如果嫌输出信息太多，看得眼花缭乱的，可以试试加上`--pretty=oneline`参数。
#### 2.时光穿梭机——版本退回

- HEAD指向的版本就是当前版本，因此，Git允许我们在版本的历史之间穿梭，使用命令`git reset --hard commit_id`。
- 穿梭前，用`git log`可以查看提交历史，以便确定要回退到哪个版本。
- 要重返未来，用`git reflog`查看命令历史，以便确定要回到未来的哪个版本。
#### 3.撤销修改

- 场景1：当你改乱了工作区某个文件的内容，想直接丢弃工作区的修改时，用命令`git checkout -- file`。
- 场景2：当你不但改乱了工作区某个文件的内容，还添加到了暂存区时，想丢弃修改，分两步，第一步用命令`git reset HEAD <file>`，就回到了场景1，第二步按场景1操作。
- 场景3：已经提交了不合适的修改到版本库时，想要撤销本次提交，参考版本回退一节，不过前提是没有推送到远程库。

#### 4.删除操作

*git checkout其实是用版本库里的版本替换工作区的版本，无论工作区是修改还是删除，都可以“一键还原”*

命令`git rm`用于删除一个文件。如果一个文件已经被提交到版本库，那么你永远不用担心误删，但是要小心，你只能恢复文件到最新版本，**你会丢失最近一次提交后你修改的内容**
#### 5.关联远程库

- 要关联一个远程库，使用命令`git remote add origin git@server-name:path/repo-name.git`；
- 关联后，使用命令`git push -u origin master`第一次推送master分支的所有内容；此后，每次本地提交后，只要有必要，就可以使用命令`git push origin master`推送最新修改；
- 分布式版本系统的最大好处之一是在本地工作完全不需要考虑远程库的存在，也就是有没有联网都可以正常工作，而SVN在没有联网的时候是拒绝干活的！当有网络的时候，再把本地提交推送一下就完成了同步！
#### 6.克隆仓库

1. 要克隆一个仓库，首先必须知道仓库的地址，然后使用`git clone`命令克隆。
2. Git支持多种协议，包括`https`，但通过`ssh`支持的原生git协议速度最快
>>>>>>> b9663e549c85fc11956ed53785dc724c5762f609
