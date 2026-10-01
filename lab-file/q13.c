#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;

    // Implicit type conversion
    float result1 = a + b;

    // Explicit type conversion
    int result2 = (int)b;

    printf("Implicit Conversion:\n");
    printf("10 + 5.5 = %.2f\n", result1);

    printf("\nExplicit Conversion:\n");
    printf("(int)5.5 = %d\n", result2);

    return 0;
}