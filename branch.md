# branch(分支)

参考：[廖雪峰git教程](https://www.liaoxuefeng.com/wiki/0013739516305929606dd18361248578c67b8067c8c017b000/001375840038939c291467cc7c747b1810aab2fb8863508000)

Git鼓励大量使用分支：

查看分支：`git branch`

创建分支：`git branch <name>`

切换分支：`git checkout <name>`

创建+切换分支：`git checkout -b <name>`

合并某分支到当前分支：`git merge <name>`

删除分支：`git branch -d <name>`

## 步骤

1. ### 创建`dev`分支，然后切换到`dev`分支

```bash
$ git checkout -b mul
Switched to a new branch 'mul'
```

2. ### 然后，用`git branch`命令查看当前分支：

```bash
$ git branch
* mul
  master
```

3. ### 正常添加暂存区和提交

```bash
$ git add branch.md README.md stage.md
$ git commit -m "new knowledge about git"
```

4. ### 切换回`master`分支

```bash
$ git checkout master
Switched to branch 'master'
```

5. ### 把`dev`分支的工作成果合并到`master`分支上

```bash
$ git merge mul
Updating b281dda..8186c3a
Fast-forward
 README.md |  4 ++++
 branch.md | 17 +++++++++++++++++
 stage.md  | 25 +++++++++++++++++++++++++
 3 files changed, 46 insertions(+)
 create mode 100644 branch.md
 create mode 100644 stage.md
```

`Fast-forward`信息，Git告诉我们，这次合并是“快进模式”，也就是直接把`master`指向`dev`的当前提交，所以合并速度非常快。当然，也不是每次合并都能`Fast-forward`

6. ### 合并完成后，就可以放心地删除`dev`分支了：

```bash
$ git branch -d mul
Deleted branch mul (was 8186c3a).
```

### last. 删除后，查看`branch`，就只剩下`master`分支了

```bash
$ git branch
* master
```

