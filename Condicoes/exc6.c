#include <stdio.h>
#include <stdlib.h>

int main()
{
    int real1, real2, chute1, chute2;
    
    printf("Insira o palpite do placar do jogo: ");
    scanf("%d %d", &chute1, &chute2);
    
    printf("Insira o placar real do jogo: ");
    scanf("%d %d", &real1, &real2);
    
    if(real1 == chute1 && real2 == chute2){
        printf("Fez 20 pontos!");
    }else if((real1 > real2) && (chute1 > chute2) && real1 == chute1){
        printf("Fez 15 pontos!");
    }else if((real2 > real1) && (chute2 > chute1) && (real2 == chute2)){
        printf("Fez 15 pontos!");
    }else if((real1 > real2) && (chute1 > chute2) || (real2 > real1) && (chute2 > chute1)){
        printf("Fez 10 pontos!");
    }else if((real1 == chute1) || (real2 == chute2)){
        printf("Fez 5 pontos!");
    }else{
        printf("Não fez nenhum ponto!");
    }
    

    return 0;
}
