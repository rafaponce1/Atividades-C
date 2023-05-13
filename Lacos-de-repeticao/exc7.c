#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Números perfeitos entre 1 e 1000 são:\n");

    for (int num = 1; num <= 1000; num++) {
        int somad = 0;
        for (int i = 1; i <= num / 2; i++) {
            if (num % i == 0) {
                somad += i;
            }
        }
        if (somad == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}