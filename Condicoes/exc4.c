#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vmax, vmot, multa;

    printf("Insira a valocidade máxima permitida na avenida: ");
    scanf("%d", &vmax);

    printf("Insira a velocidade do motorista: ");
    scanf("%d", &vmot);

    multa = (vmot-vmax)*5;

    if(vmot<=vmax){
    printf("Não há multa");
    }else{
    printf("A multa é %d", multa);
    }

    return 0;
}
