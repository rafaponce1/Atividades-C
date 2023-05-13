#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    
    setlocale(LC_ALL, "Portuguese");

    int idade, quantidadePessoas=0, maiorIdade, menorIdade, quantidadeMulheres=0, idadeMenorSalario;
    float salario,mediaSalarios=0, menorSalario;
    char sexo, sexoMenorSalario;
    do{
        printf("Informe a idade: ");
        scanf("%d", &idade);
        if(idade > 0){
            printf("Informe o sexo: ");
            getchar();
            scanf("%c", &sexo);
            printf("Informe o salario: ");
            scanf("%f", &salario);
            if(quantidadePessoas == 0){
                maiorIdade = menorIdade = idade;
                menorSalario = salario;
            } else {
                if (idade > maiorIdade){
                    maiorIdade = idade;
                } else if(idade < menorIdade){
                    menorIdade = idade;
                }
                if (salario < menorSalario){
                    menorSalario = salario;
                    sexoMenorSalario = sexo;
                    idadeMenorSalario = idade;
                }
            }
            if (sexo == 'f' || sexo == 'F'){
                quantidadeMulheres++;
            }
            mediaSalarios += salario;
            quantidadePessoas++;

        }
    }while(idade != 0);
    printf("\n\na) A media de salarios do grupo: R$%.2f", mediaSalarios/quantidadePessoas);
    printf("\nb) A maior idade do grupo eh: %d e a menor eh: %d", maiorIdade, menorIdade);
    printf("\nc) A quantidade de mulhres do grupo eh: %d", quantidadeMulheres);
    printf("\nd) Menor salario: R$%.2f, sexo: %c, idade: %d", menorSalario, sexoMenorSalario, idadeMenorSalario);
    return 0;
}
