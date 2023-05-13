#include <stdio.h>
#include <time.h>

int main()
{
    int i, j, m[8][8], n[8][8], s[8][8];
    
    srand(time(NULL));
    
    for(i = 0; i < 8; i++){
        for(j = 0; j < 8; j++){
            m[i][j] = rand()%50+1;
            n[i][j] = rand()%50+1;
            s[i][j] = m[i][j] + n[i][j];
        }
    }

    printf("\n           Matriz M\n\n");
    for(i = 0; i < 8; i++){
        for(j = 0; j < 8; j++){
        printf(" %2d ", m[i][j]);
        }
      printf("\n");
    }
    
    printf("\n            Matriz N\n\n");
    for(i = 0; i < 8; i++){
        for(j = 0; j < 8; j++){
        printf(" %2d ", n[i][j]);
        }
      printf("\n");
    }
    
    printf("\n            Matriz S\n\n");
    for(i = 0; i < 8; i++){
        for(j = 0; j < 8; j++){
        printf(" %2d ", s[i][j]);
        }
      printf("\n");
    }
    
    return 0;
}
