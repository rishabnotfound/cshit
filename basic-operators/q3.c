//area of triangle

#include <stdio.h>

int main() {
    float base, height, result;
    printf("Enter Base of Triangle :");
    scanf("%f", &base);
    printf("Enter Height of Triangle : ");
    scanf("%f", &height);
    result=0.5*base*height;
    printf("Result = %f", result);
    return 0;
}