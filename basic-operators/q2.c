//satisfactory score

#include <stdio.h>

int main(void) {
    float score_a, score_b, sum;
    printf("Enter the Employee Quality Score (out of 100) : ");
    scanf("%f", &score_a);
    printf("Enter the Employee Performance Score (out of 100)");
    scanf("%f", &score_b);
    sum=score_a+score_b;
    (sum > 50) ? printf("Satisfactory Score") : printf("Unsatisfactory Score");

    // if (sum>50){
    //     printf("Satisfactory Score");
    // }
    // else{
    //     printf("UnSatisfactory Score");
    // }
}