#include <stdio.h>
int main(){
    float a, b, c, avg;
    printf("Average of three number\n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);
    avg = (a + b + c)/3;
    printf("Average of a, b and c = %.2f", avg);
    return 0;
}