#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Écrire la fonction verifierLigneColonne() qui prend en paramètre un numéro et un sens (HORIZ ou VERT)
qui vérifie que la ligne ou la colonne (suivant les cas) numéro est bien remplie.
On pourra utiliser un tableau intermédiaire pour vérifier cela. La fonction retournera 1 si tout s’est bien passé, 0 sinon.
 Les constantes HORIZ de valeur 0 et VERT de valeur 1 sont à définir.
*/
const int M = 9;

bool verifierLigneColonne(int ligne, int colonne){
    int i; int j;

    int ligne = i;
    int colonne = j;
    for(i = 0; i < M; i++){
        if(i == 0)
            return 0;
    }
    return 1;
    for(j = 0; j < M; j++){
        if(j == 0)
            return 0;
    }
    return 1;
}
