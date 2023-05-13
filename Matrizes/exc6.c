#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main(){

    int M[10][8];
    int S[10][8];
    int i, j;
    int menor;

    srand(time(NULL));

    printf("\n               Matriz M\n");
     for(i = 0; i < 10; i++){
         for(j = 0; j < 8; j++){
            M[i][j] = rand()%10+1;
            printf(" |%2d|", M[i][j]);
        }
        printf("\n");
     }
     
    printf("\n               Matriz S\n");
    for (i = 0; i < 10; i++) {
        int menor = M[i][0];
        for (j = 1; j < 8; j++) {
            if (M[i][j] < menor) {
                menor = M[i][j];
            }
        }
        for (j = 0; j < 8; j++) {
            S[i][j] = M[i][j] * menor;
            printf(" |%2d|", S[i][j]);
        }
        printf("\n");
        
    }

   return 0;

}
