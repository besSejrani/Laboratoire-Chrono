/*
-----------------------------------------------------------------------------------
Nom du fichier  : saisie.cpp
Auteur(s)       : Paul Gillet, Besjan Sejrani
Date creation   : 10.11.2021
Description     : <à compléter>
Remarque(s)     : <à compléter>
Compilateur(s)  : Mingw-w64 g++ 11.2.0, gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
-----------------------------------------------------------------------------------
*/

#include "saisie.h"

int saisieUtilisateur(int min, int max, string messageErreur){
   bool erreurSaisie;
   int choixUtilisateur;
   do {
      cin >> choixUtilisateur;

      erreurSaisie = cin.fail() || choixUtilisateur < min
                                || choixUtilisateur > max;

      if(erreurSaisie){
         cout << messageErreur << endl;
         cin.clear();
      }

      VIDER_BUFFER;
   }while(erreurSaisie);
   return choixUtilisateur;
}

char saisieCaratere(string messageErreur){
   const char CARACTERE_MAX = 'a',
              CARACTERE_MIN = 'z';
   bool erreurSaisie;
   char choixUtilisateur;
   do {
      cin >> choixUtilisateur;

      //erreurSaisie = cin.fail();

      if(erreurSaisie){
         cout << messageErreur << endl;
         cin.clear();
      }

      VIDER_BUFFER;
   }while(erreurSaisie);
   return choixUtilisateur;
}

