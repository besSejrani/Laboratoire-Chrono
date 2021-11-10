//
// Created by bes on 10.11.21.
//
#ifndef LABORATOIRE5_CHRONO_SAISIE_H

#include <iostream>
using namespace std;

#define LABORATOIRE5_CHRONO_SAISIE_H
#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(), '\n')

const int LIMIT_INFERIEUR = 1;
const int LIMIT_SUPERIEUR = 10;

int saisieUtilisateur(){

   cout << "Veuillez entrer un chiffre compris entre "
        << LIMIT_INFERIEUR <<" et " << LIMIT_SUPERIEUR << endl;

   bool erreurSaisie;
   int choixUtilisateur;
   do {
      cin >> choixUtilisateur;

      erreurSaisie = cin.fail() || choixUtilisateur < LIMIT_INFERIEUR ||
         choixUtilisateur > LIMIT_SUPERIEUR;

      if(erreurSaisie){
         cout << "/!\\ Erreur de saisie, la valeur doit etre comprise entre "
              << LIMIT_INFERIEUR << " et " << LIMIT_SUPERIEUR << endl;

         cout << "Essayer a nouveau" << endl;
         cin.clear();
      }
      VIDER_BUFFER;

   }while(erreurSaisie);
   return choixUtilisateur;
}

#endif //LABORATOIRE5_CHRONO_SAISIE_H
