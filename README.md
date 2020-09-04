# atelier-git
atelier-git 

# Quelque command de base
gitk  git log --pretty=oneline --graph --decorate --all\
git stash\
git stash pop\
git stash list\
git checkout [commit_id] -- [filename]\
git checkout .\
git reset\

# git commit -m "message de test"
Commit avec message en local.

# git push
Envois de toutes les commits locaux sur le remote depo

# git pull
Récupération de tout les commits remote sur le local depo + application de potentielle merge

# git pull --rebase
Récupération et application de tout les commits remote en priorité, puis application de tes changements en local

# git cherry-pick
Copie d'un commit d'une branche par rapport à l'autres
