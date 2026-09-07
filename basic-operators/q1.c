//rate of interest

#include <stdio.h>

int main() {
    float amt = 15000, roi=5, time=3, result;
    //prt/100
    result=amt*roi*time/100;
    printf("Interest will be %f", result);

}