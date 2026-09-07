//Prime Number

#include <stdio.h>

int main(void){
    int numr, prime_num=0,i;
    printf("Enter a number : ");
    scanf("%d", &numr);
    for (i=2; i<=numr; i++){
        if (numr!=i){
            if (numr%i==0){
                prime_num=1;
                break;
            }
        }
    }
    if (prime_num==1){
        printf("Not a  Prime Number");
    }
    else{
        printf("Yes a Prime Number");
    }
}