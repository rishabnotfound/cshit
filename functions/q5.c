/*

Make a function:
int max(int a, int b)
that returns whichever number is larger.

*/

#include <stdio.h>

int max(int a, int b){
    if (a>b){
        return a;
    }
    if (b>a){
        return b;
    }
    else{ //equal
        return 0;
    }
}

int main(void){
    int a, b, result;
    printf("Enter First Number : ");
    scanf("%d", &a);
    printf("Enter Second Number : ");
    scanf("%d", &b);
    result = max(a,b);
    if (result==a){
        printf("Number First is Greater that is %d", a);
    }
    if (result==b){
        printf("Number Second is Greater that is %d", b);
    }
    if (result==0){
        printf("Both Number Equal");
    }
}