#include <stdio.h>

int main ()
{
  int CodigoProduto;
  
  printf("Insira o código do produto: ");
  scanf("%d", &CodigoProduto);
  
  switch(CodigoProduto){
      case 1:
        printf("Alimento não-perecível");
        break;
      case 2:
      case 3:
      case 4:
        printf("Alimento perecível");
        break;
      case 5:
      case 6:
        printf("Vestuário");
        break;
      case 7:
        printf("Higiene Pessoal");
        break;
      case 8:
      case 9:
      case 10:
      case 11:
      case 12:
        printf("Limpeza e Utensílios Domésticos");
        break;
      default:
        printf("Produto Inválido");
  }
  
  return 0;
}
