#include <stdio.h>

int main() {
    int m1, m2, m3;

    printf("Enter marks in three subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    if (m1 >= 40 && m2 >= 40 && m3 >= 40) {
        printf("Student has passed.\n");
    } else {
        printf("Student has failed.\n");
    }

    if (m1 >= 75 && m2 >= 75 && m3 >= 75) {
        printf("Student is eligible for scholarship.\n");
    } else {
        printf("Student is not eligible for scholarship.\n");
    }

    return 0;
}