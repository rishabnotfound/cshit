//Write a C program to count how many digits are in a number.

#include <stdio.h>

int main(void){
    int digit, count=0;
    printf("Etner a digit : ");
    scanf("%d", &digit);
    while (digit>0){
        digit=digit/10;
        count++;
    }
    printf("%d", count);
}