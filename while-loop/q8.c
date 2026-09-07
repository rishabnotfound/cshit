//Frequency of a digit

#include <stdio.h>

int main(void){
    int numr,digit, tmp_val, digit_counts=0;
    printf("Enter a number : ");
    scanf("%d", &numr);
    printf("Enter Searching Digit : ");
    scanf("%d", &digit);
    while (numr>0){
        tmp_val=numr%10;
        numr=numr/10;
        if (tmp_val==digit){
            digit_counts++;
        }
    }
    printf("Scanned the Number and found Frequency of %d", digit_counts);
}