#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
     int m[8][5], i, j, menor;
     srand(time(NULL));
     for(i=0;i<8;i++){
        for(j=0;j<5;j++){
            m[i][j] = rand()%15+1;
        }
     }
     menor=m[0][0];
     for(i=0;i<8;i++){
        for(j=0;j<5;j++){
            if(menor > m[i][j]){
                menor=m[i][j];
            }
        }
     }
     for(i=0;i<8;i++){
        for(j=0;j<5;j++){
            printf("%2d ",m[i][j]);
        }
        printf("\n");
     }
     printf("\nMenor valor: %d", menor);
     printf("\nAparece nas posicoes: ");
     for(i=0;i<8;i++){
        for(j=0;j<5;j++){
            if (m[i][j] == menor){
                printf("%d,%d ", i, j);
            }
        }
     }

return 0;

}
