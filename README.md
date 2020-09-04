# atelier-git
atelier-git 



L'atelier git ne fait sans SourceTree ni GitKraken, c'est une révision/découvertes de quelques commandes, celles que j'ai utilisé le plus.
Les termes utilisé dans nos petits soft sont les même sur les bouttons et font les même choses.

# Quelque command de base
```bash
gitk  git log --pretty=oneline --graph --decorate --all
```
```
git stash
```
```
git stash pop
```
```
git stash list
```
```
git checkout [commit_id] -- [filename]
```
```
git checkout .
```
```
git reset
```

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

# Les branchs
```git branch branch1```création de la branch en local
```git checkout branch1```  - basculement sur la branch1
```git push origin branch1```  - push de la nouvelle branche sur le remote


