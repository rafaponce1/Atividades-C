#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {

  int M[6][8], i, j, par, quantpar;
  int media;

  srand(time(NULL));

  for (i = 0; i < 6; i++) {
    for (j = 0; j < 8; j++) {
      M[i][j] = rand() % 30 + 1;
    }
  }

  printf("\n                Matriz M\n\n");
  for (i = 0; i < 6; i++) {
    for (j = 0; j < 8; j++) {
      printf(" |%2d|", M[i][j]);
    }
    printf("\n");
  }

  for (i = 0; i < 6; i++) {
    for (j = 0; j < 8; j++) {
      if (M[i][j] % 2 == 0) {
        par += M[i][j];
        quantpar++;
      }
    }
  }

  if (quantpar > 0) {

    media = par / quantpar;
    printf("\nA média dos valores pares da matriz gerada é: %2d", media);
  } else {
    printf("Valores inexistentes!");
  }

  return 0;
}
