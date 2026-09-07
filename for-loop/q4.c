//Find the factorial of a number

#include <stdio.h>

int main(void){
    int numr,i, tmp_val=1;
    printf("Enter a number : ");
    scanf("%d", &numr);
    for (i=1; i<=numr; i++){
        tmp_val=tmp_val*i;
    }
    printf("%d", tmp_val);
}