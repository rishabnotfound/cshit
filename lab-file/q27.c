#include <stdio.h>

int main() {
    int again;
    do {
        int student, day, attendance, total;
        for (student = 1; student <= 5; student++) {
            total = 0;
            printf("\nStudent %d:\n", student);
            for (day = 1; day <= 5; day++) {
                printf("Day %d (1 = Present, 0 = Absent): ", day);
                scanf("%d", &attendance);
                // Validate attendance using while loop
                while (attendance != 0 && attendance != 1) {
                    printf("Invalid! Enter only 0 or 1: ");
                    scanf("%d", &attendance);
                }
                if (attendance == 1)
                    total++;
            }
            printf("Total days present for Student %d = %d\n", student, total);
        }
        printf("\nGenerate report again? (1 = Yes, 0 = No): ");
        scanf("%d", &again);
    } while (again == 1);
    printf("\nReport completed.\n");
    return 0;
}