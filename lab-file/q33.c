#include <stdio.h>

void readDetails(char name[], int marks[]) {
    int i;
    printf("Enter student name: ");
    scanf("%s", name);
    printf("Enter marks for 5 subjects:\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
}

int calculateTotal(int marks[]) {
    int i, total = 0;
    for (i = 0; i < 5; i++) {
        total = total + marks[i];
    }
    return total;
}

float calculatePercentage(int total) {
    return total / 5.0;
}

char assignGrade(float percentage) {
    if (percentage >= 90)
        return 'A';
    else if (percentage >= 80)
        return 'B';
    else if (percentage >= 70)
        return 'C';
    else if (percentage >= 60)
        return 'D';
    else if (percentage >= 40)
        return 'E';
    else
        return 'F';
}

void displayResult(char name[], int total, float percentage, char grade) {
    printf("\n----- Student Result -----\n");
    printf("Name       : %s\n", name);
    printf("Total      : %d / 500\n", total);
    printf("Percentage : %.2f%%\n", percentage);
    printf("Grade      : %c\n", grade);
}

int main() {
    char name[50], grade;
    int marks[5], total;
    float percentage;
    readDetails(name, marks);
    total = calculateTotal(marks);
    percentage = calculatePercentage(total);
    grade = assignGrade(percentage);
    displayResult(name, total, percentage, grade);
    return 0;
}