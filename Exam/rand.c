#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//J'ai essayé de générer des chiffres aléatoires dans mon tableauJoueur (tab avec les 0)
const int M = 9;
int tableauJoueur();
int i = 0;

srand( time( NULL ) );

for(i=0; i<9; i++){
    i=rand()%M +1;
}

