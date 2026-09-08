// make a add() function

#include <stdio.h>

void addy(int a, int b){
    int sum=a+b;
    printf("%d + %d = %d", a,b,sum);
}

int main(void){
    int a, b;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter Second number : ");
    scanf("%d", &b);
    addy(a,b);
}