#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <math.h>

int main()
{
    srand(time(NULL));
    int dado, i, posicaoJogador1,posicaoJogador2,decisao;
    int jogador1[100], jogador2[100];
    int j1 = 1, j2 = 2;

    jogador1[0] = j1;
    jogador1[0] = j2;
    posicaoJogador1 = 0;
    posicaoJogador2 = 0;
    for(i = 0; i < 100; i++){
        jogador1[i] = 0;
        jogador2[i] = 0;
    }
    do{
        printf("\nJogue o dado, jogador 1!:\n");
        scanf("%d", &decisao);
        dado = rand() % 6 + 1;
        printf("Você tirou: %d\n",dado);
        if(dado != 0){
            if(posicaoJogador1 + dado <= 99){
                jogador1[posicaoJogador1] = 0;
                posicaoJogador1 += dado;
                jogador1[posicaoJogador1] = j1;
                printf("Ande mais uma casa: %d\n", 99-posicaoJogador1);
            }else{
                printf("Jogada inválida, valor máximo atingido\n");
                printf("Ande mais %d casas\n", 99-posicaoJogador1);
            }
        }
        for(i = 0; i < 100; i++){
            printf(" %d ", jogador1[i]);
        }

        printf("\nJogue o dado, jogador 2:\n");
        scanf("%d", &decisao);
        dado = rand() % 6 + 1;
        printf("Você tirou: %d\n",dado);
        if(dado != 0){
            if(posicaoJogador2 + dado <= 99){
                jogador2[posicaoJogador2] = 0;
                posicaoJogador2 += dado;
                jogador2[posicaoJogador2] = j2;
                printf("Ande mais uma casa: %d\n", 99-posicaoJogador2);
            }else{
                printf("Jogada inválida, valor máximo atingido\n");
                printf("Ande mais %d casas\n", 99-posicaoJogador2);
            }
        }
        for(i = 0; i < 100; i++){
            printf(" %d ", jogador2[i]);
        }


    }while(jogador1[99] == 0 && jogador2[99] == 0);

    if(jogador1[99] != 0){
        printf("\nJogador 1 Venceu\n");
        for(i = 0; i < 100; i++){
            printf(" %d ", jogador1[i]);
        }
    }else{
        printf("\nJogador 2 venceu\n");
        for(i = 0; i < 100; i++){
            printf(" %d ", jogador2[i]);
        }
    }

    return 0;
}
