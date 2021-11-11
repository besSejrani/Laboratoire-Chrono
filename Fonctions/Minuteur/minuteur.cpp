#include "minuteur.h"

int minuteur(){

   clock_t compteur;

   compteur = clock();

   for(int i=0; i<=100000; ++i){
      usleep(1);
   }

   compteur = clock() - compteur;

   cout << "nombre de secondes =" << (float) compteur / CLOCKS_PER_SEC << endl;

return 1;
}