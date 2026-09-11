/*

Array Reverse
Take 5 numbers into an array and print them backwards.

*/

#include <stdio.h>

int main(void){
    int arr[5], i, j, tmp_val;
    for (i=0; i<5; i++){
        printf("Enter the %d Number : ", i+1);
        scanf("%d", &tmp_val);
        arr[i]=tmp_val;
    }
    printf("{ ");
    for (j=4; j>=0; j--){
        printf("%d", arr[j]);
        printf(" ");
    }
    printf("}");
}