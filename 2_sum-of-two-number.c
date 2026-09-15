#include <stdio.h>
int main(){
    float a, b, c;
    printf("Sum of two number\n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    c = a + b;
    printf("Sum of a + b = %.2f", c);
    return 0;
}