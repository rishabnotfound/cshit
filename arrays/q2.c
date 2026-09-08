/* 

Take 5 numbers and find their sum using array

*/

#include <stdio.h>

int main(void){
    int arr[5], i, j, sum=0, tmp_val;
    for (i=0; i<=4; i++){
        printf("Enter the %d Number : ", i+1);
        scanf("%d", &tmp_val);
        arr[i]=tmp_val;
    }
    for (j=0; j<=4; j++){
        sum=sum+arr[j];
    }
    printf("Sum is %d", sum);
}