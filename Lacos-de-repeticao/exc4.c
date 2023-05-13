#include <stdio.h>

int main() {
    printf("Numeros primos entre 100 e 500:\n");
    for (int j = 100; j <= 500; j++) {
        int primo = 1; 
        
        for (int i = 2; i <= j / 2; i++) {
            if (j % i == 0) {
                primo = 0; 
            }
        }
        
        if (primo) {
            printf("%d\n", j); 
        }
    }
    return 0;
}