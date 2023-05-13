#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <locale.h>

int main() {
    
     setlocale(LC_ALL, "Portuguese");
    
    int vetor[30], i, pares = 0, impares = 0;
    srand(time(NULL)); 
    
    for (i = 0; i < 30; i++) {
        vetor[i] = rand() % 100 + 1; 
        if (vetor[i] % 2 == 0) { 
            pares++;
        } else {
            impares++;
        }
    }
    
    printf("Quantidade de numeros pares: %d\n", pares);
    printf("Numeros pares: ");
    for (i = 0; i < 30; i++) {
        if (vetor[i] % 2 == 0) { 
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");
    
    printf("Quantidade de numeros impares: %d\n", impares);
    printf("Numeros impares: ");
    for (i = 0; i < 30; i++) {
        if (vetor[i] % 2 != 0) { 
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");
    
    return 0;
}
