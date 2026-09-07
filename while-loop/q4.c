//Write a C program to find the largest digit in a number.

#include <stdio.h>

int main(void){
    int numr, highest=0, tmp_val;
    printf("Enter a Digit : ");
    scanf("%d", &numr);
    while(numr>0){
        tmp_val=numr%10;
        numr=numr/10;
        if (tmp_val>highest){
            highest=tmp_val;
        }
    }
    printf("highest number is = %d", highest);
}