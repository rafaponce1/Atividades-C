#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z, soma;

    printf("Insira o valor de X: ");
    scanf("%d", &x);

    printf("Insira o valor de Y: ");
    scanf("%d", &y);

    printf("Insira o valor de Z: ");
    scanf("%d", &z);

    soma = x + y;

    if(soma<z){
    printf("A soma é menor que Z");
    }else if(soma>z){
    printf("A soma é maior que Z");
    }else{
    printf("A soma é igual a Z");
    }

    return 0;
}
