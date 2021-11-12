/*
-----------------------------------------------------------------------------------
Nom du fichier  : minuteur.cpp
Auteur(s)       : Paul Gillet, Besjan Sejrani
Date creation   : 10.11.2021
Description     : <à compléter>
Remarque(s)     : <à compléter>
Compilateur(s)  : Mingw-w64 g++ 11.2.0, gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
-----------------------------------------------------------------------------------
*/


#include "minuteur.h"

using namespace std;

int minuteur(){

   clock_t compteur;

   compteur = clock();

   for(int i=0; i<=100000; ++i){
      usleep(1);
   }

   compteur = clock() - compteur;

   cout << "nombre de secondes =" << (float) compteur / CLOCKS_PER_SEC << endl;

return 1;
}