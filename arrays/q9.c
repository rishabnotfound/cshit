/*

Start with an array of 5 numbers.
Ask the user:
an index where they want to insert
the new value

*/

#include <stdio.h>

int main(void){
    int tmp_val, arr[60],index, i , j, indexing_tmp, k,cal;
    for (i=0; i<5; i++){ //storing
        printf("Enter the %d Number : ", i+1);
        scanf("%d", &tmp_val);
        arr[i]=tmp_val;
    }
    printf("Enter a index for insertion : ");
    scanf("%d", &index);
    printf("What do you want to insert : ");
    scanf("%d", &tmp_val);

    for (k=4; k>=index; k--){ // shifting
        indexing_tmp = arr[k];
        arr[k+1] = indexing_tmp;
    }

    // for (k=index+1; k<6; k++){ //shifting
    //     indexing_tmp=arr[k];
    //     arr[k+1]=indexing_tmp;
    // }

    arr[index]=tmp_val;
    printf("{");
    for (j=0; j<6; j++){ //printing
        printf("%d", arr[j]);
        printf(" ");
    }
    printf("}");
}