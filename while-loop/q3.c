//Write a C program to find the sum of all digits

#include <stdio.h>

int main(void){
    int numr, sum=0, tmpint;
    printf("Enter a Digit : ");
    scanf("%d", &numr);
    while (numr>0){
        tmpint=numr%10;
        numr=numr/10;
        sum=sum+tmpint;
    }
    printf("%d", sum);
}