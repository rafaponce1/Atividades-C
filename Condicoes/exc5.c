#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nh, vh, b1, b2, salario, horase;

    printf("Insira o número de horas trabalhadas: ");
    scanf("%f", &nh);

    printf("Insira o valor da hora: ");
    scanf("%f", &vh);

    salario = nh*vh;
    horase = nh - 40;
    b1 = vh * horase * 0.5;
    b2 = vh * horase;

    if(nh<=40){
    printf("O valor do salário é: %.2f", salario);
    }
    else if(nh > 40 && nh <= 60){
    printf("O valor do salário é: %.2f", (salario + b1));
    }
    else{
    printf("O valor do salário é: %.2f", (salario + b2));
    }

    return 0;
}
