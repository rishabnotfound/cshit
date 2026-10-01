#include <stdio.h>

int main() {
    int n, i, j, again;

    do {
        // Validate N using while loop
        printf("Enter a positive number N: ");
        scanf("%d", &n);

        while (n <= 0) {
            printf("Invalid! Enter a positive number: ");
            scanf("%d", &n);
        }

        // Nested for loops
        for (i = 1; i <= n; i++) {
            printf("\nTable of %d:\n", i);

            for (j = 1; j <= 10; j++) {
                printf("%d x %d = %d\n", i, j, i * j);
            }
        }

        printf("\nPractice again? (1 = Yes, 0 = No): ");
        scanf("%d", &again);

    } while (again == 1);

    printf("\nProgram ended.\n");

    return 0;
}