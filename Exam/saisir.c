#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//une fonction saisir qui demande au joueur de saisir 3 informations: i, j , et v qui permettront de placer la valeur v aux coordonnées (i,j)
 
int saisir(int i, int j, int v){
    printf("Saisissez l'information i svp");
    scanf("%d", i);
    printf("Saisissez l'information j svp");
    scanf("%d", j);
    printf("Saisissez la valeur que vous souhaitez insérer dans le sudoku svp");
    scanf("%d", v);
}



