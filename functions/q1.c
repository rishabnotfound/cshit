// write a function for sayHello()

#include <stdio.h>

void sayHello(char name[]){
    printf("Hello %s", name);
}

int main(void){
    char name[50];
    printf("Enter a name : ");
    scanf("%s", name);
    sayHello(name);
}