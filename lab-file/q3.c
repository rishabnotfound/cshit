//largest of two number
#include <stdio.h>

int main(void){
    float a,b;
    printf("Enter the 1st Number : ");
    scanf("%f", &a);
    printf("Enter the 2nd Number : ");
    scanf("%f", &b);
    if(a>b){
        printf(".2%f is greater than .2%f",a,b);
    }
    else if(b>a){
        printf("%.2f is greater than %.2f",b,a);
    }
    else{
        printf("Both Number Equal !!");
    }
}