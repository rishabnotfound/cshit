/* 

ARRAY DELETION WITHOUT ARRAY DUPLICATIONS 

*/

#include <stdio.h>

int main(void) {
    int arr[5], i, tmp_val, index, size = 5;
    for (i = 0; i < size; i++) {
        printf("Enter the Number %d : ", i + 1);
        scanf("%d", &tmp_val);
        arr[i] = tmp_val;
    }
    printf("Enter the Index to Delete : ");
    scanf("%d", &index);

    // Shift elements to the left
    for (i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Logical size decreases
    size--;

    printf("{ ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("}");

    return 0;
}