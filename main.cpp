/*
-----------------------------------------------------------------------------------
Nom du fichier  : main.cpp
Auteur(s)       : Paul Gillet, Besjan Sejrani
Date creation   : 10.11.2021
Description     : <à compléter>
Remarque(s)     : <à compléter>
Compilateur(s)  : Mingw-w64 g++ 11.2.0, gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
-----------------------------------------------------------------------------------
*/

#include <iostream>
#include <cstdlib>
#include <limits>

#include "./Fonctions/Saisie/saisie.h"
#include "./Fonctions/Minuteur/minuteur.h"
#include "./Fonctions/Generateur/generateur.h"

using namespace std;

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define ERREUR "Erreur de saisie"

const int LIMITE_INFERIEURE_LANCES    =   1;
const int LIMITE_SUPERIEURE_LANCES    =  10;

const int LIMITE_INFERIEURE_CARACTERE =  97; // code ascii pour a
const int LIMITE_SUPERIEURE_CARACTERE = 122; // code ascii pour z


int main() {

   intialisationSeed();
   //--------------------------------------------------
   // Bonjour
   //--------------------------------------------------

   cout << "Ce programme permet de tester votre dexterite au clavier, c'est une "
           "course contre la montre." << endl;

   cout << "Vous commencerez par definir le nombre de lettre que vous voulez "
           "genere, comprise entre [" << LIMITE_INFERIEURE_LANCES << " - "
           << LIMITE_SUPERIEURE_LANCES << "]," << endl;

   cout << "puis vous devrez entrer les valeurs le plus rapidement possible."
        << endl << endl;

   //--------------------------------------------------
   // Saisie
   //--------------------------------------------------

   do {

      cout << "Veuillez entrer un chiffre compris entre ["
           << LIMITE_INFERIEURE_LANCES <<" - " << LIMITE_SUPERIEURE_LANCES << "] : ";

      int choix = saisieUtilisateur(LIMITE_INFERIEURE_LANCES,
                                    LIMITE_SUPERIEURE_LANCES,ERREUR);

      //--------------------------------------------------
      // Calcul
      //--------------------------------------------------

      char caractereGenere;
      int compteurReponseCorrecte=0;
      char caractereSaisie;

      for (int i = 0; i < choix; ++i) {
         caractereGenere = (char) genererChiffreAleatoire(LIMITE_INFERIEURE_CARACTERE,
                                                          LIMITE_SUPERIEURE_CARACTERE);
         cout << "Lettre : " << caractereGenere << " : ";

         caractereSaisie = saisieCaratere(ERREUR);

         if (caractereSaisie == caractereGenere) {
            compteurReponseCorrecte++;
         }
      }

      //--------------------------------------------------
      // Affichage résultat
      //--------------------------------------------------

      cout << "Nombre de reponses correctes : " << compteurReponseCorrecte << endl;

      //--------------------------------------------------
      // Fin
      //--------------------------------------------------
      cout << "Voulez-vous recommencer ? [o/n] : " << endl;

   }while(saisieUtilisateur(LIMITE_INFERIEURE_CARACTERE,
                            LIMITE_SUPERIEURE_CARACTERE, ERREUR));
   return EXIT_SUCCESS;
}
