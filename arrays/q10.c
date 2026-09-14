/*

DELETING IN ARRAYS

*/

#include <stdio.h>

int main(void){
    int arr[5],i,tmp_val,j, indextodel, tmp_arr[4], tmp_count=0, k;
    for (i=0; i<5; i++) //storing
    {
        printf("Enter the the Number %d : ",i+1);
        scanf("%d", &tmp_val);
        arr[i]=tmp_val;
    }
    printf("Enter the Index to Delete : ");
    scanf("%d", &indextodel);
    for (j=0; j<5; j++){
        if (j!=indextodel){
            tmp_arr[tmp_count]=arr[j];
            tmp_count=tmp_count+1;
        }
    }
    printf("{ ");
    for (k=0; k<4; k++){
        printf("%d", tmp_arr[k]);
        printf(" ");
    }
    printf("}");
}