/*
-----------------------------------------------------------------------------------
Nom du fichier  : saisie.cpp
Auteur(s)       : Paul Gillet, Besjan Sejrani
Date creation   : 10.11.2021
Description     : List des fonctions liees a la saisie

Remarque(s)     : Si les valeures entrees par l'utilisateur ne satisfaisent pas
                  la valeur minimal et maximal, un message d'erreur est lance

Compilateur(s)  : Mingw-w64 g++ 11.2.0, gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
-----------------------------------------------------------------------------------
*/

#include "saisie.h" // Liste des fonctions prototypes liees a la saisie

int saisieUtilisateur(int min, int max, const string& messageErreur){
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

char saisieCaratere(char min_char, char max_char, const string& messageErreur){
   bool erreurSaisie;
   char choixUtilisateur;
   do {
      cin >> choixUtilisateur;

      erreurSaisie = cin.fail() || choixUtilisateur < min_char
                                || choixUtilisateur > max_char;

      if(erreurSaisie){
         cout << messageErreur << endl;
         cin.clear();
      }

      VIDER_BUFFER;
   }while(erreurSaisie);
   return choixUtilisateur;
}

bool saisieCaratere(bool veutContinuer, const string& messageErreur){
   bool erreurSaisie;
   char choixUtilisateur;
   do {
      cin >> choixUtilisateur;
      choixUtilisateur =  (char)tolower(choixUtilisateur);

      erreurSaisie = cin.fail() || (choixUtilisateur != 'o' && choixUtilisateur != 'n');

      if(erreurSaisie){
         cout << messageErreur << endl;
         cin.clear();
      }

      if(choixUtilisateur == 'n') {
         veutContinuer = false;
      }

      VIDER_BUFFER;
   }while(erreurSaisie);
   return veutContinuer;
}

