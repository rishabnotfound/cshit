#include <stdio.h>

int main(void){
    int limit=5, i,j;
    for (i=limit; i>=1; i--){ //5
        for(j=1; j<=i; j++){ //j=1; j<=5; j++
            printf("*");
        }
        printf("\n");
    }
}