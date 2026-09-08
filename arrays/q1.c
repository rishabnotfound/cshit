/*

Write a program that:

Creates an integer array of size 5
Takes 5 numbers from the user
Prints all 5 numbers afterward

*/

#include <stdio.h>

int main(void){
    int arr[5], i ,j, tmp_val;
    for (i=0; i<=4; i++){
        printf("Enter the %d number : ", i);
        scanf("%d", &tmp_val);
        arr[i]=tmp_val;
    }
    printf("{");
    for (j=0; j<=4; j++){
        printf(" "); 
        printf("%d",arr[j]);
        printf(" ");  
    }
    printf("}");
}