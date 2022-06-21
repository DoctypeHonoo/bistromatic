<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174841251-a7b3671d-5941-43e3-94d3-3d1988cd08de.png"/>
</p>
<h1 align="center">
   Bistromatic
</h1>

---

## Motivation : 

La **Bistromatic** est un projet de début d'année à Epitech, il s'effectue en groupe de trois. Le but est de créer une calculatrice qui va permettre de faire des opérations infini en interprétant les calculs dans les chaînes de caractères pour ne pas être limité par la taille des integers.

---

## Description :



---

## Fonctions Autorisées : 

- read, write, malloc, free, exit

---

## Installer & Lancer le Projet :

Ouvrez un terminal et dirigez vous ou vous souhaitez que le projet soit installé, puis exécutez les commandes suivantes : 
```bash
$ git clone git@github.com:DoctypeHonoo/bistromatic.git
$ cd bistromatic
$ make
```
Une fois compilé, le binaire se trouvera à la racine du projet, et il vous faudra l'utiliser comme ceci :
```bash
$ echo Calcul | ./calc Base Operateurs Longueur
```
<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174844033-bfef5640-1915-44c3-976e-845a6a91514d.png"/>
</p>
---

## Comment l'utiliser ? : 

La commande echo doit être utilisé en même temps que le binaire du programme séparé par un pipe "|". Le echo en premier avec comme arguments le calcul demandé, puis pour les arguments lors de l'exécution du binaire, l'utilisateur devra fournir la base (ex: "0123456789"), ainsi que les opérateurs (ex: "()+-\*/%") et pour finir la longueur du calcul donner avec le echo.
![image](https://user-images.githubusercontent.com/91092610/174857243-9dcd8ab3-cf45-4ea0-be7c-46704f25741c.png)
![image](https://user-images.githubusercontent.com/91092610/174857570-c836307c-550d-4c50-9b6e-85e4fe0ce0df.png)
