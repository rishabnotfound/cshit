/*

Take 5 numbers into an array, then ask the user for another number and search whether that number exists in the array.

*/

#include <stdio.h>

int main(void){
    int i, j, tmp_val, arr[5], numr, found=0;
    for (i=0; i<5; i++){
        printf("Enter the %d Number : ", i+1);
        scanf("%d", &tmp_val);
        arr[i]=tmp_val;
    }
    printf("Enter the Number you want search : ");
    scanf("%d", &numr);
    for (j=0; j<5; j++){
        if (arr[j]==numr){
            found=1;
        }
    }
    if (found==0){
        printf("not found");
    }
    else{
        printf("we found it");
    }
}