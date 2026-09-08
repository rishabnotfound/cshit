/*

12345
1234
123
12
1

print this mf
*/

#include <stdio.h>

int main(void){
    int i,j,tmp_val=5;
    for (i=1; i<=5; i++){
        for (j=1; j<=tmp_val; j++){
            printf("%d", j);
        }
        tmp_val--;
        printf("\n");
    }
}