#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    // Relational operators
    printf("\nRelational Operations:\n");
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a > b  : %d\n", a > b);
    printf("a < b  : %d\n", a < b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n", a <= b);
    // Logical operators
    printf("\nLogical Operations:\n");
    printf("(a > b) && (a != 0) : %d\n", (a > b) && (a != 0));
    printf("(a < b) || (b != 0) : %d\n", (a < b) || (b != 0));
    printf("!(a == b) : %d\n", !(a == b));

    return 0;
}