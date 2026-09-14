/*
Searching & Sorting

BUBBLE SORT ASENDING ORDER
*/

#include <stdio.h>

int main(void){
    int arr[5] = {1, 5, 2 ,6 ,4};
    int tmp=0, previous_numr=0, i;
    int sorted=0;
    while (sorted!=1){
        sorted=1; //asuming its sorted
        for (i=0; i<4; i++){
            previous_numr=arr[i];
            if (previous_numr>arr[i+1]){
                tmp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=tmp;
                sorted=0;
            }
        }
    }
    printf("{ ");
    for (i=0; i<5; i++){
        printf("%d ", arr[i]);
    }
    printf("}");
}