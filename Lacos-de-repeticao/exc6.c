#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 15, fs = 0, sec = 1, nt; 

    printf("Os primeiros 15 termos são:\n");

    printf("%d\n", fs); 

    for (int i = 1; i < n; i++) {
        printf("%d\n", sec); 

        nt = fs + sec; 
        fs = sec; 
        sec = nt; 
    }

    return 0;
}