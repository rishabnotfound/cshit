/*

Make two functions:
square()
cube()

*/

#include <stdio.h>

//square
int square(int a){
    return a*a;
}

int cube(int a){
    return a*a*a;
}


int main(void){
    int a, sq_result, cube_result;
    printf("enter a number : ");
    scanf("%d", &a);
    sq_result = square(a);
    cube_result = cube(a);
    printf("Square : %d \n Cube : %d", sq_result, cube_result);
}