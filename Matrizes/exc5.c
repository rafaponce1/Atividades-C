#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main(){

    int A[6][8];
    int B[8][7];
    int C[6][7];
    int i, j;

    srand(time(NULL));

    printf("                 Matriz A\n");
     for(i = 0; i < 6; i++){
        for(j = 0; j < 8; j++){
            A[i][j] = rand()%10+1;
            printf(" |%2d|", A[i][j]);
        }
        printf("\n");
    }

    printf("\n              Matriz B\n");
     for(i = 0; i < 8; i++){
        for(j = 0; j < 7; j++){
            B[i][j] = rand()%10+1;
            printf(" |%2d|", B[i][j]);
        }
        printf("\n");
     }

    printf("\n     Matriz C (Resultado de A.B)\n");
     for(i = 0; i < 6; i++){
        for(j = 0; j < 7; j++){
            C[i][j] = A[i][j] * B[i][j];
            printf(" |%3d|", C[i][j]);
        }
        printf("\n");
     }

   return 0;
   
}
