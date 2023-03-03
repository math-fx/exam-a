#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//génère le tableau avec tous les 0
const int M = 9;
 
void tableauJoueur(int arr[M][M])
{
    int i, j;
    for (i = 0; i < M; i++){
      for (j = 0; j < M; j++){
        printf("%d", arr[i][j]);
      }
        printf("\n");
    }
}
 
int main(){
    int arr[9][9] ={{0, 0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0}};
    tableauJoueur(arr);
    

    system("pause");
    return 0;
}

