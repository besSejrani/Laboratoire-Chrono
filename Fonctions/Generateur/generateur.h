/*
-----------------------------------------------------------------------------------
Nom du fichier : main.cpp
Auteur(s)      : Paul Gillet, Besjan Sejrani
Date creation  : 10.11.2021
Description    : <à compléter>
Remarque(s)    : <à compléter>
Compilateur    : Mingw-w64 g++ 11.2.0, gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
-----------------------------------------------------------------------------------
*/

#ifndef LABORATOIRE5_CHRONO_GENERATEUR_H
#define LABORATOIRE5_CHRONO_GENERATEUR_H

/**
    @brief Genere un chiffre aleatoire comprise entre l'intervale min inclu et
    max inclu.
    @param LIMITE_INFERIEURE La valeur generee minimal.
    @param LIMITE_SUPERIEURE La valeur generee maximal.
*/
int genererChiffreAleatoire(const int& LIMITE_INFERIEURE,
                            const int& LIMITE_SUPERIEURE);

/**
 * @brief Initialisation de la seed pour le generateur aleatoire.
 */
void intialisationSeed();

#endif //LABORATOIRE5_CHRONO_GENERATEUR_H
