//reversing the number

#include <stdio.h>

int main() {
    int num, rev_arr[100000], i=0, j=0;

    printf("Enter number : ");
    scanf("%d", &num);

    while (num>0){ //storing
        rev_arr[i]=num%10;
        num=num/10;
        i++;
    }
    
    printf("Reverse of the Number = ");
    while (j<i){ //printing
        printf("%d", rev_arr[j]);
        j++;
    }

    return 0;
}