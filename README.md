# Introduction aux variables et types de données en C

## Introduction

Ce premier exercice vous permettra de vous familiariser avec les variables et les types de données de base en C. Comprendre comment déclarer, initialiser et manipuler des variables est fondamental pour tout programme C. Nous allons explorer les types de données les plus courants et apprendre à les afficher correctement.

## Exercice

### Partie 1 : Déclaration et affichage

Créez un programme C qui :

1. Déclare et initialise les variables suivantes :

   - Un entier `age` avec votre âge
   - Un nombre à virgule flottante `taille` représentant votre taille en mètres
   - Un caractère `initiale` contenant la première lettre de votre prénom
   - Une chaîne de caractères `nom` contenant votre nom (utilisez un tableau de caractères)

2. Affiche ces variables sur la console en utilisant la fonction `printf()` avec les spécificateurs de format appropriés

Voici un exemple de structure pour commencer :

```c
#include <stdio.h>

int main() {

    // Déclaration et initialisation de vos variables ici.

    return 0;
}
```

### Partie 2 : Opérations et conversions

Modifiez votre programme pour :

1. Créer une variable `annee_naissance` calculée à partir de l'`age` et de l'année actuelle (2025)
2. Convertir la `taille` de mètres en centimètres et stocker le résultat dans une nouvelle variable `taille_cm` (de type entier)
3. Afficher ces nouvelles variables, y compris la valeur originale et la valeur convertie pour la taille

### Partie 3 : Types supplémentaires

Étendez votre programme en ajoutant :

1. Une variable `est_etudiant` de type `int` utilisée comme booléen (1 pour vrai, 0 pour faux) indiquant si vous êtes étudiant ou non

## Résultat attendu

Votre programme doit afficher un résultat similaire à celui-ci (avec vos propres valeurs) :

```
Informations personnelles :
Nom : Dupont
Initiale : J
Age : 25 ans
Taille : 1.75 mètres (175 centimètres)
Année de naissance : 2000
Statut étudiant : Oui
```

## Astuces

- Pour les chaînes de caractères en C, n'oubliez pas qu'elles se terminent par le caractère nul `\0` (ajouté automatiquement lors de l'initialisation avec des guillemets)
- Les spécificateurs de format courants sont :
  - `%d` pour les entiers
  - `%f` pour les nombres à virgule flottante (utilisez `%.2f` pour afficher avec 2 décimales)
  - `%c` pour les caractères
  - `%s` pour les chaînes de caractères
- La conversion d'un type à un autre (comme float vers int) s'appelle un "cast" et peut être réalisée en plaçant le type cible entre parenthèses : `(int)variable_float`
- Pour afficher un booléen sous forme de texte, vous pouvez utiliser une structure conditionnelle :
  ```c
  printf("Statut étudiant : %s\n", est_etudiant ? "Oui" : "Non");
  ```

## Pour aller plus loin

- Essayez d'ajouter d'autres types de variables comme `unsigned int`, `double` ou `long`
- Explorez les limites de chaque type (valeurs minimales et maximales)
- Demandez à l'utilisateur de saisir ses informations via la fonction `scanf()` au lieu de les coder en dur

---

_La compréhension des types de données est essentielle pour éviter des erreurs subtiles dans vos programmes. Prenez le temps d'expérimenter avec différentes valeurs et conversions !_
