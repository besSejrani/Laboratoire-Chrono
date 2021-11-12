#include "saisie.h"

int saisieUtilisateur(int min, int max, string messageErreur){

   bool erreurSaisie;
   int choixUtilisateur;
   do {
      cin >> choixUtilisateur;

      erreurSaisie = cin.fail() || choixUtilisateur < min ||
                     choixUtilisateur > max;

      if(erreurSaisie){
         cout << messageErreur << endl;
         cout << "Essayer a nouveau" << endl;

         cin.clear();
      }
      VIDER_BUFFER;
   }while(erreurSaisie);
   return choixUtilisateur;
}