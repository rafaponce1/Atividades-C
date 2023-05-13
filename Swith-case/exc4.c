#include <stdio.h>

int
main ()
{
    int CodigoConta;
    float real1, real2;
    
    printf("Insira dois números reais: ");
    scanf("%f %f", &real1, &real2);
    
    printf("Insira o código para a operação (1 a 4): ");
    scanf("%d", &CodigoConta);
    
    switch(CodigoConta){
        case 1:
            printf("A média entre os números digitádos é: %.2f", (real1 + real2)/2);
            break;
        case 2:
            printf("A diferença entre os números digitados é: %.2f", (real1 - real2));
            break;
        case 3:
            printf("O produto entre os números é: %.2f", (real1 * real2));
            break;
        case 4:
            printf("A divisão entre os números é: %.2f", (real1/real2));
        default:
            printf("Código de operação errado");
    }
  
  return 0;
}
