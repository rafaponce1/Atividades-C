#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <locale.h>

int main()
{

     setlocale(LC_ALL, "Portuguese");

    int numeros[30], i, numero_busca;
    srand(time(NULL));
    
    for(i = 0; i < 30; i++){
        numeros[i] = rand() % 100 + 1;
    }
    
    printf("Vetor gerado: ");
    for(i = 0; i < 30; i++){
        printf("%d ", numeros[i]);
    }
    printf("\n");
    
    printf("Digite um número: ");
    scanf("%d", &numero_busca);
    
    int encontrado = 0;
    printf("O número %d aparece nas posições: ", numero_busca);
    for(i = 0; i < 30; i++){
        if(numeros[i] == numero_busca){
            printf("%d ", i);
            encontrado = 1;
        }
    }
    
    if(encontrado == 0){
        printf("Valor não encontrado!");
    }
    
    return 0;
}
