/*
-----------------------------------------------------------------------------------
Nom du fichier : main.cpp
Auteur(s)      : Paul Gillet, Besjan Sejrani
Date creation  : 10.11.2021

Description    : Liste des fonctions liees a la generation d'un entier aleatoire.

Remarque(s)    : L'entier est genere dans l'intervale de min a max inclus

Compilateur    : Mingw-w64 g++ 11.2.0, gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
-----------------------------------------------------------------------------------
*/

#include "generateur.h"
#include <ctime>
#include <cstdlib>

using namespace std;

int genererChiffreAleatoire(const int& LIMITE_INFERIEURE,
                            const int& LIMITE_SUPERIEURE) {

   static bool premier = true;
   if (premier) {
      srand((unsigned)time(NULL));
      premier = false;
   }

   int range           = LIMITE_SUPERIEURE - LIMITE_INFERIEURE + 1;
   int valeurAleatoire = rand() % range + LIMITE_INFERIEURE;

   return valeurAleatoire;
}
