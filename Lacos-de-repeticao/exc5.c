#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, sp = 0, si = 0;

    printf("Insira 20 numeros naturais\n");
    for (int i = 0; i < 20; i++) {
        printf("Informe o numero %d: ", i + 1);
        scanf("%d", &num);

        if (num % 2 == 0) { 
            sp += num; 
        } else {
            si += num; 
        }
    }

    printf("A soma dos pares é: %d\n", sp);
    printf("Soma dos numeros impares: %d\n", si);

    return 0;
}
