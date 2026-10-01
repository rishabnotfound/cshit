#include <stdio.h>

int main() {
    int n, i;
    float price, total = 0;
    int quantity;
    // a) Display item numbers from 1 to N using for loop
    printf("Enter number of items: ");
    scanf("%d", &n);
    printf("\nItem Numbers:\n");
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    // b) Calculate total bill using while loop
    i = 1;
    while (i <= n) {
        printf("\n\nEnter price of item %d: ", i);
        scanf("%f", &price);
        printf("Enter quantity of item %d: ", i);
        scanf("%d", &quantity);
        total = total + (price * quantity);
        i++;
    }
    printf("\nTotal Bill = %.2f\n", total);
    // c) Display item numbers in reverse using do-while loop
    i = n;
    printf("\nItem Numbers in Reverse:\n");
    do {
        printf("%d ", i);
        i--;
    } while (i >= 1);
    return 0;
}