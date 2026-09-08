/*

main()
  ↓
addy(10, 20)
  ↓
function calculates 30
  ↓
30 comes BACK to main
  ↓
main prints 30

*/

#include <stdio.h>

int addy(int a, int b){
    int sum=a+b;
    return sum;
}

int main(void){
    int a, b, result;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter Second number : ");
    scanf("%d", &b);
    result = addy(a,b);
    printf("result is %d ", result);
}