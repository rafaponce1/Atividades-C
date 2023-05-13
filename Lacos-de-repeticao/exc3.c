#include <stdlib.h>
#include <stdio.h>

int main()
{
    
    int i, numero, cont = 0;
    
    printf("Insira um número inteiro: ");
    scanf("%d", &numero);
    
    for(i=1; i<=numero;i++){
        if(numero % i == 0){
            cont++;
        }
    }
    
    if(cont == 2){
    printf("É um número primo");
    }else{
    printf("Não é um número primo");
    }

    return 0;
}