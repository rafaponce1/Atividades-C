#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int nlados;
    float tlados;
    
    printf("Insira a número de lados de um polígono regular: ");
    scanf("%d", &nlados);
    
    printf("Insira o tamanho dos lados do polígono: ");
    scanf("%f", &tlados);
    
    switch(nlados){
        case 3:
            printf("Seu polígono é um triângulo, cuja área é de: %.2f", (tlados * tlados * 1.73)/4);
        break;
        case 4:
            printf("Seu polígono é um quadrado, cuja área é de: %.2f", (tlados * tlados));
        break;
        case 6:
            printf("Seu polígono é um hexágono, cuja área é de: %.2f", (6 * tlados * tlados * 1.73)/4);
        break;
        default:
            printf("O programa não sabe calcular essa área");
    }
    
    return 0;
}
