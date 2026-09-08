/*
Take 5 numbers into an array and find the smallest number.
*/

#include <stdio.h>

int main(void){
    int arr[5],i, j, largest_val, tmp_val;
    for (i=0; i<5; i++){
        printf("Enter the %d Number : ", i+1);
        scanf("%d", &tmp_val);
        arr[i]=tmp_val;
    }
    largest_val=arr[0];
    for (j=0; j<5; j++){
       if (arr[j]<largest_val){
        largest_val=arr[j];
       }
    }
    printf("%d is the smallest value", largest_val);
}