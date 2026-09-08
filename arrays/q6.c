/*

count how many times a number appears using array

*/


#include <stdio.h>

int main(void){
    int i, j, tmp_val, arr[5], numr, count=0;
    for (i=0; i<5; i++){
        printf("Enter the %d Number : ", i+1);
        scanf("%d", &tmp_val);
        arr[i]=tmp_val;
    }
    printf("Enter the Number you want search : ");
    scanf("%d", &numr);
    for (j=0; j<5; j++){
        if (arr[j]==numr){
            count++;
        }
    }
    printf("it appeared %d", count);
}