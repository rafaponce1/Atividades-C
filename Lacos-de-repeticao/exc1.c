#include <stdlib.h>
#include <stdio.h>

int main(){
    int i;
    
    for(i=10;i<=300;i++){
        if(i % 4 == 0){
            printf("%d\n", i);
        }
    }

  return 0;
}