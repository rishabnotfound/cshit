#include <stdio.h>

int main() {
    int productivity, quality, teamwork;

    printf("Enter Productivity score: ");
    scanf("%d", &productivity);

    printf("Enter Quality score: ");
    scanf("%d", &quality);

    printf("Enter Teamwork score: ");
    scanf("%d", &teamwork);

    if (productivity >= 50 && quality >= 50 && teamwork >= 50)
        printf("Satisfactory Performance\n");
    else
        printf("Unsatisfactory Performance\n");

    if (productivity >= 80 && quality >= 80 && teamwork >= 80)
        printf("Eligible for Performance Bonus\n");
    else
        printf("Not Eligible for Performance Bonus\n");

    return 0;
}