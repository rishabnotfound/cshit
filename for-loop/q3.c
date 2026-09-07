//multiplication table of a number

#include <stdio.h>

int main(void){
    int numr, tmp_val,i;
    printf("Enter a number for multiplications : ");
    scanf("%d", &numr);
    for (i=1; i<=10; i++){
        tmp_val=numr*i;
        printf("%d x %d = %d \n", numr, i, tmp_val);
    }
}