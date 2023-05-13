#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int i, maior, menor, v[15];
    float media;

    printf("Insira 15 valores inteiros: ");

    for(i = 0; i < 15; i++){
        scanf("%d", &v[i]);
    }

    maior = v[0];
    menor = v[0];

    for(i = 0; i < 15; i++){
        media += v[i];
        printf("%d", v[i]);

        if(v[i] > maior){
            maior = v[i];
        }
        else if(v[i] < menor){
            menor = v[i];
        }
    }

    printf("O maior valor é: %d\n", maior);
    printf("O menor valor é: %d\n", menor);
    printf("A média dos valores é: %.2f\n", media/15);

    return 0;
}
