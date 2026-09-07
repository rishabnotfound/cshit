//Count even & odd digits

#include <stdio.h>

int main(void){
    int numr, odd_count=0, even_count=0, tmp_var;
    printf("Enter a number : ");
    scanf("%d", &numr);
    while (numr>0){
        tmp_var=numr%10;
        numr=numr/10;
        if (tmp_var%2==0){
            even_count++;
        }
        else{
            odd_count++;
        }
    }
    printf("this number has odd count of %d \n", odd_count);
    printf("this number has even count of %d \n", even_count);
}