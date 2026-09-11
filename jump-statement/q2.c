#include <stdio.h>

int main(){
    int i;
    for(i=1; i<=4; i++){
        if(i==3)
            break;
        if(i==1)
            printf("Sapna \n");
        else if(i==2)
            printf("Myshaa \n");
        else if(i==3)
            printf("Arjun \n");
        else
            printf("Udit \n");
    }
    return 0;
}