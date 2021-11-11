#include "saisie.h"

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