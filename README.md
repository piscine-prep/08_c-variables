# Exercice sur les types de variables en C

## Introduction

Cet exercice vous permettra de vous familiariser avec les différents types de variables disponibles en C et leurs spécificités. Vous apprendrez à déclarer, initialiser et afficher des variables de différents types, ainsi qu'à comprendre leurs limites et leurs comportements.

## Code de base

Un code initial vous est fourni dans le fichier `src/main.c`. Ce code présente quelques types de variables de base et leur affichage avec la fonction `printf()`.

## Objectifs

1. Comprendre les différents types de variables en C
2. Maîtriser les spécificateurs de format pour l'affichage
3. Explorer les limites des types de données
4. Expérimenter avec les conversions entre types
5. Observer les comportements en cas de dépassement

## Consignes

### Partie 1 : Analyse du code existant

1. Compilez et exécutez le programme fourni
2. Étudiez attentivement le code et les résultats affichés
3. Notez comment chaque type de variable est déclaré et affiché
4. Comprenez l'utilisation des différents spécificateurs de format (`%d`, `%f`, `%s`, etc.)

### Partie 2 : Expérimentation

Modifiez le programme existant pour :

1. Ajouter au moins trois nouveaux types de variables non présents dans le code initial
2. Tester les limites de chaque type (par exemple, essayez de stocker une valeur trop grande)
3. Effectuer et afficher au moins trois conversions entre différents types (cast)
4. Démontrer le comportement en cas de dépassement de capacité (overflow)
5. Illustrer la différence de précision entre `float` et `double`

### Partie 3 : Documentation

1. Pour chaque type ajouté, commentez le code pour expliquer :
   - La taille en mémoire (en octets)
   - La plage de valeurs possible
   - Les cas d'utilisation typiques
2. Créez un tableau récapitulatif des types de données sous forme de commentaire
3. Documentez les comportements observés lors des tests de limites et de conversions

## Résultat attendu

À la fin de cet exercice, vous aurez :

- Un programme C étendu démontrant une variété de types de variables
- Des commentaires explicatifs sur chaque type et ses caractéristiques
- Une meilleure compréhension des comportements des différents types
- Une expérience pratique avec les conversions et les limites

## Recommandations

- Utilisez les constantes des bibliothèques `limits.h` et `float.h` pour obtenir les valeurs limites
- Testez systématiquement le comportement de chaque nouveau type ajouté
- Soyez attentif aux warnings du compilateur concernant les conversions
- Explorez les options de formatage de `printf()` pour afficher les valeurs de différentes manières

## Ressources supplémentaires

Pour approfondir vos connaissances sur les types en C, vous pouvez consulter :

- La documentation officielle de C
- Les bibliothèques `limits.h`, `float.h` et `stdint.h`
