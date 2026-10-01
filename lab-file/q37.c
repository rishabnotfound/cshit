#include <stdio.h>

// Function to find GCD using Euclidean algorithm
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to reverse digits using recursion
int reverse(int n, int rev) {
    if (n == 0)
        return rev;

    return reverse(n / 10, rev * 10 + n % 10);
}

int main() {
    int a, b, n;

    printf("Enter two numbers for GCD: ");
    scanf("%d %d", &a, &b);

    printf("GCD = %d\n", gcd(a, b));

    printf("Enter a number to reverse: ");
    scanf("%d", &n);

    printf("Reverse = %d\n", reverse(n, 0));

    return 0;
}