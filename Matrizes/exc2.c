#include <stdio.h>
#include <time.h>

int main()
{
    int i, j, M[10][10], soma, sec;
    
    srand(time(NULL));
    
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            M[i][j] = rand()%30+1;
        }
    }
    
    printf("\n            Matriz M\n\n");
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
        printf(" %2d ", M[i][j]);
        }
      printf("\n");
    }
    
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if(i == j){
                soma += M[i][j];
            }
            else if(i + j == 9){
                sec += M[i][j];
            }
        }
    }    
    
    printf("\nA soma da diagonal principal é: %d\n",soma);
    printf("A soma da diagonal secundária é: %d\n",sec);
    
    return 0;
}
