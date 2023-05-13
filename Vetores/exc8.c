#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <locale.h>

int main() {
    int num1, num2, resto, mdc;

    do {
        printf("Digite o primeiro numero: ");
        scanf("%d", &num1);

        printf("Digite o segundo numero: ");
        scanf("%d", &num2);

        if (num1 == 0 || num2 == 0) {
            break;
        }

        while (num2 != 0) {
            resto = num1 % num2;
            num1 = num2;
            num2 = resto;
        }

        mdc = num1;

        printf("O MDC entre %d e %d é: %d\n", num1, num2, mdc);

    } while (num1 != 0 && num2 != 0);

    printf("Fim do programa.");

    return 0;
}
