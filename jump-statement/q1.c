//go to statement

#include <stdio.h>

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    if(n<0)
        goto negative;

    printf("The number is positive");
    return 0;
    negative:
        printf("the number is negative");
    return 0;
}