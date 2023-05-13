#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float h, cm, cf;
    char sexo;
    
    printf("Insira seua altura: ");
    scanf("%f", &h);
    
    printf("Insira seu sexo (m ou f): ");
    scanf("%s", &sexo);
    
    cm = (72.7*h)-58;
    cf = (62.1*h)-44.7;
    
    if(sexo == 'm'){
        printf("Seu peso ideal é: %.2f", cm);
    }else if(sexo == 'f'){
        printf("Seu peso ideal é: %.2f", cf);
    }else{
        printf("Insira o seu sexo corretamente, por gentileza");
    }
return 0;
}
