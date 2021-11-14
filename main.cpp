/*
-----------------------------------------------------------------------------------
Nom du fichier  : main.cpp
Auteur(s)       : Paul Gillet, Besjan Sejrani
Date creation   : 10.11.2021

Description     : Ce programme permet de tester la dexterite de l'utilisateur au
                  clavier. Apres avoir laisser le choix a l'utilisateur du nombre de
                  lettre generer, le programme propose aleatoirement une des
                  lettres de l'alphabet.

                  L'utilisateur doit alors taper aussi vite
                  que possible cette lettre. A la fin du programme, celui-ci affiche
                  le nombre de lettre correctement tapees, le temps total pour
                  toutes les lettres ainsi que le temps moyen par lettre.

                  L'utilisateur peut alors recommencer une partie ou quitter le
                  programme.

Remarque(s)     : Regarder les prototypes des fonctions pour voir la gestion
                  d'exceptions

Compilateur(s)  : Mingw-w64 g++ 11.2.0, gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
-----------------------------------------------------------------------------------
*/

#include <cstdlib>   // Permet d'utiliser des constantes tels qu'EXIT_SUCCESS
#include <iostream>  // Permet d'utiliser les flux d'entres et de sorties
#include <iomanip>   // Permet de definir la largeur d'affichage pour les resultats
#include <ctime>     // Permet d'utiliser les compteurs de la librairie C


#include "./Fonctions/Saisie/saisie.h" // Liste des fonctions prototypes liees a
                                       // la saisie

#include "./Fonctions/Generateur/generateur.h" // Liste de prototypes des
                                               // fonctions liees au generateur
                                               // d'entier aleatoire
using namespace std;

// Utilitaires
#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define ERREUR       "Erreur de saisie"

const int LIMITE_INFERIEURE_LANCES    =   1; // Nombre de lances minimum
const int LIMITE_SUPERIEURE_LANCES    =  10; // Nombre de lances maximum

const int LIMITE_INFERIEURE_CARACTERE =  97; // code ascii pour le caractere a
const int LIMITE_SUPERIEURE_CARACTERE = 122; // code ascii pour le caractere z


int main() {

   bool veutContinuer = true;                 // variable d'etat utilisee pour
                                              // recommencer le programme

   //================================================================================
   //                             Message d'accueil
   //================================================================================

   cout << "Ce programme permet de tester votre dexterite au clavier, c'est une "
           "course contre la montre." << endl;

   cout << "Vous commencerez par definir le nombre de lettre que vous voulez "
           "genere, comprise entre ["       << LIMITE_INFERIEURE_LANCES << " - "
        << LIMITE_SUPERIEURE_LANCES << "]," << endl;

   cout << "puis vous devrez entrer les valeurs le plus rapidement possible."
        << endl << endl;

   //================================================================================
   //                            Saisie utilisateur
   //================================================================================

   do {
      cout << "Veuillez entrer un chiffre compris entre ["
           << LIMITE_INFERIEURE_LANCES <<" - "
           << LIMITE_SUPERIEURE_LANCES << "] : ";

      int choix = saisieUtilisateur(LIMITE_INFERIEURE_LANCES,
                                    LIMITE_SUPERIEURE_LANCES,ERREUR);

      //=============================================================================
      //                                  Calcul
      //=============================================================================

      int     compteurReponseCorrecte = 0;
      char    caractereGenere;
      char    caractereSaisie;

      clock_t compteurDebut;
      clock_t compteurFin;

      compteurDebut = clock();

      for (int i = 0; i < choix; ++i) {
         caractereGenere = (char)genererChiffreAleatoire(LIMITE_INFERIEURE_CARACTERE,
                                                         LIMITE_SUPERIEURE_CARACTERE);
         cout << "Lettre : " << caractereGenere << " : ";

         caractereSaisie = saisieCaratere(LIMITE_INFERIEURE_CARACTERE,
                                          LIMITE_SUPERIEURE_CARACTERE,ERREUR);

         if (caractereSaisie == caractereGenere) {
            compteurReponseCorrecte++;
         }
      }

      compteurFin            = clock();
      int tempsTotal         = (int)(compteurFin - compteurDebut) / CLOCKS_PER_SEC;
      int moyenneTempsEcoule = (int)tempsTotal / choix;

      //=============================================================================
      //                                Resultat
      //=============================================================================

      const char LARGEUR_AFFICHAGE = 18 ;

      cout << "Nombre de reponses correctes : " << compteurReponseCorrecte << endl;
      cout << "temps ecoule " << setw(LARGEUR_AFFICHAGE) << ": " << tempsTotal
           << endl;
      cout << " => " << moyenneTempsEcoule << " sec par lettre" << endl << endl;


      //=============================================================================
      //                        Interaction utilisateur
      //=============================================================================

      cout << "Voulez-vous recommencer ? [o/n] : ";

   }while(saisieCaratere(veutContinuer, ERREUR));

   //================================================================================
   //                                 Message d'erreur
   //================================================================================

   cout << endl;
   cout << "Merci d'avoir utilise notre programme." << endl;
   cout << "Presser ENTER pour quitter"             << endl;

   VIDER_BUFFER;
   return EXIT_SUCCESS;
}
