#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float peso, altura, imc;

    printf("Insira sua altura: ");
    scanf("%f", &altura);

    printf("Insira seu peso: ");
    scanf("%f", &peso);

    imc = peso/(altura * altura);

    printf("O seu imc é de: %.2f \n", imc);

    if(imc<18.5)
    {
        printf("Você está abaixo do peso");
    }
    else if(imc>=18.5 && imc<=25)
        {
            printf("Você está no peso normal");
        }
    else if(imc>25 && imc<=30)
        {
            printf("Você está acima do peso");
        }
    else
    {
        printf("Voce está obeso");
    }


    return 0;
}
