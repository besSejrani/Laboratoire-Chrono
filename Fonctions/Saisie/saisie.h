#ifndef LABORATOIRE5_CHRONO_SAISIE_H
#define LABORATOIRE5_CHRONO_SAISIE_H

#include <iostream>
using namespace std;

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(), '\n')

const int LIMIT_INFERIEUR = 1;
const int LIMIT_SUPERIEUR = 10;

int saisieUtilisateur();

#endif //LABORATOIRE5_CHRONO_SAISIE_H
