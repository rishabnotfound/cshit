#include <stdio.h>

int main() {
    int a = 10, b = 5, c = 2;
    int result;

    // Operator precedence
    result = a + b * c;
    printf("10 + 5 * 2 = %d\n", result);
    result = (a + b) * c;
    printf("(10 + 5) * 2 = %d\n", result);
    // Associativity
    result = a - b - c;
    printf("10 - 5 - 2 = %d\n", result);
    result = a / b * c;
    printf("10 / 5 * 2 = %d\n", result);

    return 0;
}