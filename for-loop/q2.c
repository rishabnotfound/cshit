//Sum from 1 to 100

#include <stdio.h>

int main(void){
    int sum,tmp_val = 0, i;
    for (i=1; i<=100; i++){
        tmp_val=tmp_val+i;
    }
    printf("%d", tmp_val);
}