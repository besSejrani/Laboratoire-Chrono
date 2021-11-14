/*
-----------------------------------------------------------------------------------
Nom du fichier  : saisie.h
Auteur(s)       : Paul Gillet, Besjan Sejrani
Date creation   : 10.11.2021
Description     : Liste des prototypes liees a la saisie
Remarque(s)     : Surcharge de la fonction saisieCaratere
Compilateur(s)  : Mingw-w64 g++ 11.2.0, gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
-----------------------------------------------------------------------------------
*/

#ifndef LABORATOIRE5_CHRONO_SAISIE_H
#define LABORATOIRE5_CHRONO_SAISIE_H

#include <iostream> // Permet d'utiliser les flux d'entres et de sorties
#include <limits>   // Permet d'implementer VIDER_BUFFER
#include <string>   // Permet d'utiliser des strings

using namespace std;

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(), '\n')

/**
    @brief Retourne la valeur entree par l'utilisateur, compris entre les
    parametres min et max et retourne un entier.
    @param min La valeur minimal que l'utilisateur doit entrer.
    @param max La valeur maximal que l'utilisateur doit entrer.
    @param messageErreur Le message d-erreur a afficher en cas d'erreur.
*/
int saisieUtilisateur(int min, int max, const string& messageErreur);

/**
    @brief Retourne la valeur entree par l'utilisateur, compris entre les
    parametres min et max et retourne un char.
    @param min La valeur minimal que l'utilisateur doit entrer.
    @param max La valeur maximal que l'utilisateur doit entrer.
    @param messageErreur Le message d'erreur a afficher en cas d'erreur.
*/
char saisieCaratere(char max_char, char min_char,const string& messageErreur);

/**
    @brief Retourne le souhait de l'utilisateur de recommencer ou non le jeu.
    @param bool True par defaut, passe a false si l'utilisateur ne veut pas
    recommencer.
    @param messageErreur Le message d'erreur a afficher en cas d'erreur.
*/
bool saisieCaratere(bool veutRecommencer, const string& messageErreur);

#endif //LABORATOIRE5_CHRONO_SAISIE_H
