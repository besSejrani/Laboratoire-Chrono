/*
-----------------------------------------------------------------------------------
Nom du fichier  : minuteur.h
Auteur(s)       : Paul Gillet, Besjan Sejrani
Date creation   : 10.11.2021
Description     : <à compléter>
Remarque(s)     : <à compléter>
Compilateur(s)  : Mingw-w64 g++ 11.2.0, gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
-----------------------------------------------------------------------------------
*/

#ifndef LABORATOIRE5_CHRONO_MINUTEUR_H
#define LABORATOIRE5_CHRONO_MINUTEUR_H

#include <iostream>
#include <ctime>
#include <unistd.h>

using namespace std;

/**
    @brief Minuteur permettant de compter le nombre de secondes entre deux
    intervalles.
    @return Retourne la valeur du minuteur.
*/
int minuteur();

#endif //LABORATOIRE5_CHRONO_MINUTEUR_H
