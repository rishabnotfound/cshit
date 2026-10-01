#include <stdio.h>

int main()
{
    int choice, marks = 75;
    float price = 50;

    for(choice = 1; choice <= 5; choice++)
    {
        if(choice == 3)
            continue;

        switch(choice)
        {
            case 1:
                printf("Tea ");
                break;

            case 2:
                printf("Coffee ");
                break;

            case 3:
                printf("Juice ");
                break;

            case 4:
                printf("Meal ");
                break;

            default:
                printf("Invalid ");
        }
    }

    if(marks >= 80)
        price = price - 10;
    else if(marks >= 60)
        price = price - 5;
    else
        price = price + 5;

    printf("\nPrice = %.0f", price);
    printf("\nSize = %zu", sizeof(marks));

    printf("\n Rishab Gautam");
    printf("\n 268100486");

    return 0;
}