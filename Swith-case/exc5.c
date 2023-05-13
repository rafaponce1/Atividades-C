#include <stdio.h>

int
main ()
{
    int CodigoProduto, quantidade;
    
    printf("Insira o código do produto: ");
    scanf("%d", &CodigoProduto);
    
    printf("Insira a quantidade de produtos consumidos: ");
    scanf("%d", &quantidade);
    
    switch(CodigoProduto){
        
        case 100: 
            printf("O produto consumido foi o cachorro quente, com o valor total de: %.2f reais", (4.5 * quantidade));
            break;
        case 101:
            printf("O produto consumido foi o bauru simples, com o valor total de: %.2f reais", (7.3 * quantidade));
            break;
        case 102: 
            printf("O produto consumido foi o bauru com ovo, com o valor total de: %.2f reais", (8.7 * quantidade));
            break;
        case 103:
            printf("O produto consumido foi o hamburguer, com o valor total de: %.2f reais", (5.6 * quantidade));
            break;
        case 104: 
            printf("O produto consumido foi o cheeseburguer, com o valor total de: %.2f reais", (7.2 * quantidade));
            break;
        case 105:
            printf("O produto consumido foi o bauru simples, com o valor total de: %.2f reais", (5.45 * quantidade));
            break;
	default:
	printf("O produto não existe!");
    }
  
  return 0;
}
