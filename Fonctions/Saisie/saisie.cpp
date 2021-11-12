#include "saisie.h"

/**
    @nom saisieUtilisateur
    @description Retourne la valeur entre par l'utilisateur, compris entre les
    parametres min et max.
    @parametre min La valeur minimal que l'utilisateur doit entrer.
    @parametre max La valeur maximal que l'utilisateur doit entrer.
    @parametre messageErreur Le message d-erreur a afficher en cas d'erreur.
*/
int saisieUtilisateur(int min, int max, string messageErreur){

   bool erreurSaisie;
   int choixUtilisateur;
   do {
      cin >> choixUtilisateur;

      cout << choixUtilisateur;

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