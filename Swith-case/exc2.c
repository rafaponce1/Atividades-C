#include <stdio.h>

int
main ()
{
  float ValorCompra;
  int CodigoCompra;

  printf("Insira o valor total da compra: ");
  scanf("%f", &ValorCompra);
  
  printf("Insira o código da compra: ");
  scanf("%d", &CodigoCompra);
  
  switch(CodigoCompra){
      case 1:
        printf("O valor final da compra é: %.2f", ValorCompra);
        break;
      case 2:
        printf("O valor final da compra é: %.2f", ValorCompra - (ValorCompra * 0.10));
        break;
      case 3:
        printf("O valor final da compra é: %.2f", ValorCompra - (ValorCompra * 0.05));
        break;
      default:
        printf("O valor final da compra é; %.2f", ValorCompra);
  }

  return 0;
}
