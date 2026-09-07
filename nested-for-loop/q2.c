/*
this pattern now

*****
****
***
**
*

*/

#include <stdio.h>

int main(void){
    int i,j;
    for (i=1; i<=5; i++){
        for(j=i; j<=5; j++){
            printf("*");
        }
        printf("\n");
    }
}