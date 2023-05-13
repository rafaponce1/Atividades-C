#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;

    printf("Insira o primeiro número inteiro: ");
    scanf("%d", &n1);

    printf("Insira o segundo número inteiro: ");
    scanf("%d", &n2);

    if(n1>n2){
    printf("O maior número é: %d", n1);
    }else if(n2>n1){
    printf("O maior número é: %d", n2);
    }else{
    printf("Os números são iguais");
    }

    return 0;
}
