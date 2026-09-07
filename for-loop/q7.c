//reversing a number by for loop

#include <stdio.h>

int main(void){
    int numr;
    printf("Enter a number for the reversing : ");
    scanf("%d", &numr);
    for (; numr > 0; numr = numr / 10){
        //start ; condition ; update
        printf("%d",numr%10);
    }
}