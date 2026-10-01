//addition of two number
#include <stdio.h>

int main(void){
    float a,b,sum;
    printf("Enter the 1st Number : ");
    scanf("%f", &a);
    printf("Enter the 2nd Number : ");
    scanf("%f", &b);
    sum=a+b;
    printf("Sum of %.2f and %.2f is %.2f", a, b, sum);
}