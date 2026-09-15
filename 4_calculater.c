#include <stdio.h>
int main(){
    float a, b, sum, sub, multi, divi;
    printf("Calculater for two number\n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    sum = a + b;
    sub = a - b;
    multi = a * b;
    divi = a / b;
    printf("\nCalculated values of a and b\n\nsum of = %.2f\nsub of = %.2f\nmulti of = %.2f\ndivi of = %.2f\n\n", sum, sub, multi, divi);
    return 0;
}