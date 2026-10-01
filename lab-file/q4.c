//area of rectangle
#include <stdio.h>

int main(void){
    float l,b, area;
    printf("Enter the Length : ");
    scanf("%f", &l);
    printf("Enter the Breadth : ");
    scanf("%f", &b);
    area=l*b;
    printf("Area will be : %.3f", area);
}
