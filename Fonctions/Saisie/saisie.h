#ifndef LABORATOIRE5_CHRONO_SAISIE_H
#define LABORATOIRE5_CHRONO_SAISIE_H

#include <iostream>
#include <limits>
#include <string>

using namespace std;

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(), '\n')



int saisieUtilisateur(int min, int max, string messageErreur);


#endif //LABORATOIRE5_CHRONO_SAISIE_H
