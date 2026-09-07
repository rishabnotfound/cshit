//Find the smallest digit

#include <stdio.h>

int main(void){
    int numr, smallest, tmp_var;
    printf("Enter the digit : ");
    scanf("%d", &numr);
    smallest=numr%10;
    while (numr>0){
        tmp_var=numr%10;
        numr=numr/10;
        if (tmp_var<smallest){
            smallest=tmp_var;
        }
    }
    printf("smallest value is %d", smallest);
}