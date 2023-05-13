#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int i, atual = 1, anterior = 1, proximo = 0;
    int v[25];
    
    for (i = 0; i < 25; i++) {
        v[i] = proximo;
        atual = anterior + proximo;
        anterior = proximo;
        proximo = atual;
    }
    
    printf("Sequencia Fibonacci:\n");
    for (i = 0; i < 25; i++) {
        printf("%d ", v[i]);
    }
    
    return 0;
}
