#include <stdio.h>
#include <stdlib.h>

int main(){
    
 int i;
 float maior, menor, media, v;

    printf("Insira um valor: ");
    scanf("%f", &v);
    
    maior = media = menor = v;
    
    for(i=0;i<9;i++){
        printf("Insira um valor: ");
        scanf("%f", &v);
        
            if(v>maior){
                maior == v;
            }
            if(v<menor){
                menor == v;
            }
            
            media = media + v;
    }
    media = media/10;
    
    printf("O maior número informado é o %.2f\n", maior);
    printf("O menor número informado é o %.2f\n", menor);
    printf("A média dos números informados é %.2f\n", media);
    
    return 0;
}
