//Write a C program to check whether a number is a palindrome.

#include <stdio.h>

int main(void){
    int original, numr, rev_arr[100], i=0, palindrome=1;
    printf("Enter a number : ");
    scanf("%d", &numr);
    original=numr;
    while (numr>0){
        rev_arr[i]=numr%10;
        numr=numr/10;
        i++;
    } 
    while (i>0) { 
        if (rev_arr[i-1]!=original%10){
            palindrome=0;
            break;
        }
        original=original/10;
        i--;
    }
    if (palindrome==1){
        printf("yes daddy");
    }
    else{
        printf("no daddy");
    }
}