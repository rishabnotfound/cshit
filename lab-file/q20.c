#include <stdio.h>

int main() {
    int n, i, a, b, c;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    // Using for loop
    printf("\nFibonacci using for loop:\n");
    a = 0;
    b = 1;
    for (i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    // Using while loop
    printf("\n\nFibonacci using while loop:\n");
    a = 0;
    b = 1;
    i = 1;
    while (i <= n) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
        i++;
    }
    // Using do-while loop
    printf("\n\nFibonacci using do-while loop:\n");
    a = 0;
    b = 1;
    i = 1;
    if (n > 0) {
        do {
            printf("%d ", a);
            c = a + b;
            a = b;
            b = c;
            i++;
        } while (i <= n);
    }
    return 0;
}