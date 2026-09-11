#include <stdio.h>

int main(void){
    int choice;
    printf("Enter a day  (1-7) : ");
    scanf("%d", &choice);
    switch(choice)
        {
            case 1:
                printf("You choosed monday");
                break;
            case 2:
                printf("You choosed tuesday");
                break;
            case 3:
                printf("You choosed wednesday");
                break;
            case 4:
                printf("You choosed thursday");
                break;
            case 5:
                printf("You choosed friday");
                break;
            case 6:
                printf("You choosed saturday");
                break;
            case 7:
                printf("You choosed sunday");
                break;
            default:
                printf("out of the range");
                break;
        }
}