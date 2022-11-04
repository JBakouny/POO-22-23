# C++ Workspace Implemented in Class

To see the whole git history, type the command:

`
git log --graph --all --oneline
`
for more details on each commit:
`
git log --graph --all
`

Before switching branches you should commit all tracked changes:

`
git add .
git commit -m "Commit Message"
`


To make staged changes unstaged:

`
git reset
`

To remove all changes and lose uncommitted work in tracked files:

Warning: this command is dangerous!

`
git reset --hard
`


To remove all changes and lose uncommitted work in one tracked file:

Warning: this command is dangerous!

`
git checkout -- <file-path>
`


To remove all untracked files:

Warning: this command is dangerous!

`
git clean -f -d
`

To swicth branches:

`
git checkout <branch-name>
`

To create a new branche at current commit:

`
git branch <branch-name>
`

To merge another branch in current branch:

`
git merge <other_branch>
` 