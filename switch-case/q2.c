#include <stdio.h>

int main(void){
    int choice, num1, num2;
    printf("Enter the Number 1 : ");
    scanf("%d", &num1);
    printf("Enter the Number 2 : ");
    scanf("%d", &num2);
    printf("What do you want to perform ? \n");
    printf("1. Addition \n");
    printf("2. Substraction \n");
    printf("3. Multiplication \n");
    printf("4. Divison \n");
    printf("5. Exit \n");
    printf("Enter the Choice : ");
    scanf("%d", &choice);
    switch (choice){
        case 1:
            printf("%d", num1+num2);
            break;
        case 2:
            printf("%d", num1-num2);
            break;
        case 3:
            printf("%d", num1*num2);
            break;
        case 4:
            printf("%d", num1/num2);
            break;
        case 5:
            printf("quitting");
            break;
    }
}