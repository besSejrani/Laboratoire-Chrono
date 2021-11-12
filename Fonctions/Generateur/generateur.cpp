/*
-----------------------------------------------------------------------------------
Nom du fichier : main.cpp
Auteur(s)      : Paul Gillet, Besjan Sejrani
Date creation  : 10.11.2021
Description    : <à compléter>
Remarque(s)    : <à compléter>
Compilateur    : Mingw-w64 g++ 11.2.0, gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
-----------------------------------------------------------------------------------
*/

#include "generateur.h"

using namespace std;

int genererChiffreAleatoire(const int& LIMITE_INFERIEURE, const int&
LIMITE_SUPERIEURE) {
   //srand(time(NULL));
   int range = LIMITE_SUPERIEURE-LIMITE_INFERIEURE + 1;
   int valeurAleatoire = rand() % range + LIMITE_INFERIEURE;
   return valeurAleatoire;
}
