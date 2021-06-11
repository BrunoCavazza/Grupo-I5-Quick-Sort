# Grupo-I5-Quick-Sort
--------
#Instalacion del proyecto
Lo primero que hay que hacer es descargar el repositorio de git con los siguientes pasos:
--------
#Git
##crear una carpeta donde se instalara el proyecto
```sh
$ git init
```
```sh
$ git remote add origin https://github.com/BrunoCavazza/Grupo-I5-Quick-Sort.git
```
```sh
$ git fetch --all
```
```sh
git branch -r | grep -v '\->' | while read remote; do git branch --track "${remote#origin/}" "$remote"; done
```
```sh
$ git pull --all
```
```sh
$ git branch
```
```sh
$ git checkout develop
```
