/*

DELETING IN ARRAYS

*/

#include <stdio.h>

int main(void){
    int arr[5],i,tmp_val,j, indextodel, k;
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
            
        }
    }
    printf("{ ");
    for (k=0; k<4; k++){
        printf("%d", arr[k]);
        printf(" ");
    }
    printf("}");
}