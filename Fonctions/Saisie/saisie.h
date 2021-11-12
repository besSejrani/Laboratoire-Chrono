/*
-----------------------------------------------------------------------------------
Nom du fichier  : saisie.h
Auteur(s)       : Paul Gillet, Besjan Sejrani
Date creation   : 10.11.2021
Description     : <à compléter>
Remarque(s)     : <à compléter>
Compilateur(s)  : Mingw-w64 g++ 11.2.0, gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
-----------------------------------------------------------------------------------
*/

#ifndef LABORATOIRE5_CHRONO_SAISIE_H
#define LABORATOIRE5_CHRONO_SAISIE_H

#include <iostream>
#include <limits>
#include <string>

using namespace std;

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(), '\n')


/**
    @brief Retourne la valeur entre par l'utilisateur, compris entre les
    parametres min et max.
    @param min La valeur minimal que l'utilisateur doit entrer.
    @param max La valeur maximal que l'utilisateur doit entrer.
    @param messageErreur Le message d-erreur a afficher en cas d'erreur.
*/
int saisieUtilisateur(int min, int max, string messageErreur);


#endif //LABORATOIRE5_CHRONO_SAISIE_H
