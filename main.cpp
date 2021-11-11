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
#include <limits>
#include "./Fonctions/Saisie/saisie.h"
#include "./Fonctions/Minuteur/minuteur.h"
using namespace std;

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(), '\n')

int main() {


   //--------------------------------------------------
   // Bonjour
   //--------------------------------------------------

   cout << "Ce programme permet de tester votre dexterite au clavier, c'est une "
           "course contre la montre." << endl;

   cout << "Vous commencerez par definir le nombre de lettre que vous voulez "
           "genere, comprise entre MIN et MAX," << endl;

   cout << "puis vous devrez entrer les valeurs le plus rapidement possible."
        << endl << endl;

   //--------------------------------------------------
   // Saisie
   //--------------------------------------------------
   int choix = saisieUtilisateur();
   cout << "mon choix est " << choix << endl;




   //--------------------------------------------------
   // Calcul
   //--------------------------------------------------

   minuteur();

   //--------------------------------------------------
   // Affichage résultat
   //--------------------------------------------------



   //--------------------------------------------------
   // Fin
   //--------------------------------------------------
   cout << "Merci d'avoir utilise notre programme." << endl;
   cout << "presser ENTER pour quitter";
   VIDER_BUFFER;

   return EXIT_SUCCESS;
}
