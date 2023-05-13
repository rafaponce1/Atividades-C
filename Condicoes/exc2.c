#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Insira o primeiro número inteiro: ");
    scanf("%d", &a);

    printf("Insira o segundo número inteiro: ");
    scanf("%d", &b);

    if(a % b==0){
    printf("%d é divisível por %d", a, b);
    }else{
    printf("%d não é divisível por %d ", a, b);
    }

    return 0;
}
