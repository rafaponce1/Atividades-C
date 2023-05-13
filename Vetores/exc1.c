#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int a, b=0, z, i, j, teste = 0;

    printf("Informe o valor de a: ");
    scanf("%d", &a);
    
    do{
        printf("Informe o valor de b (b > a): ");
        scanf("%d", &b);
    } while(b <= a);
    
    do{
        printf("Informe o valor de z (z > b): ");
        scanf("%d", &z);
    } while(z <= b || z > 2*b);

    for(i = a; i <= b; i++){
        for(j = a; j <= b; j++){
            if(i + j == z){
                printf("A soma que satisfaz o problema é: %d + %d = %d", i, j, z);
                teste = 1;
                break;
            }
        }
        if(teste){
            break;
        }
    }

    if(teste == 0){
        printf("Dados inválidos");
    }

    return 0;
}
