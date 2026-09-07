//Count how many even and odd numbers exist from 1 to N.

#include <stdio.h>

int main(void){
    int numr, i, odd_count=0, even_count=0;
    printf("Enter a number for the range : ");
    scanf("%d", &numr);
    for (i=1; i<=numr; i++){
        if (i%2==0){
            even_count++;
        }
        else{
            odd_count++;
        }
    }
    printf("Number of even are %d \n Number of Odd are %d",even_count, odd_count);
}