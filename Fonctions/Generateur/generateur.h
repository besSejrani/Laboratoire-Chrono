/*
-----------------------------------------------------------------------------------
Nom du fichier : generateur.h
Auteur(s)      : Paul Gillet, Besjan Sejrani
Date creation  : 10.11.2021

Description    : Liste des prototypes des fonctions liees a la generation d'un
                 entier aleatoire.

Remarque(s)    :

Compilateur    : Mingw-w64 g++ 11.2.0, gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
-----------------------------------------------------------------------------------
*/

#ifndef LABORATOIRE5_CHRONO_GENERATEUR_H
#define LABORATOIRE5_CHRONO_GENERATEUR_H

/**
    @brief Initialise la seed en fonction du temps lors de la compilation du
           programme au premier appel de la fonction. Puis retourne un entier
           aleatoire compris entre l'intervale min inclu et
           max inclu.
    @param LIMITE_INFERIEURE La valeur generee minimal.
    @param LIMITE_SUPERIEURE La valeur generee maximal.
*/
int genererChiffreAleatoire(const int& LIMITE_INFERIEURE,
                            const int& LIMITE_SUPERIEURE);

#endif //LABORATOIRE5_CHRONO_GENERATEUR_H
