/*

Modification + Indexing

Write a program that:

Creates an array of 5 integers.
Takes 5 numbers from the user.
Asks the user for an index.
Asks for a new value.
Replaces the value at that index.
Prints the final array.

*/

#include <stdio.h>

int main(void){
    int arr[5], indexfind, newval, i,tmp_val, j;
    for (i=0; i<5; i++){
        printf("Enter the %d Number : ", i+1);
        scanf("%d", &tmp_val);
        arr[i]=tmp_val;
    }
    printf("Enter a index to find : ");
    scanf("%d", &indexfind);
    printf("%d", arr[indexfind]);
    printf("Enter a new value to replace this index : ");
    scanf("%d", &newval);
    arr[indexfind]=newval;
    printf("{ ");
    for (j=0; j<5; j++){
        printf("%d", arr[j]);
        printf(" ");
    }
    printf("}");
}