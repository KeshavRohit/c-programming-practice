#include <stdio.h>
int main(){
    int a, b, max;
    printf("Enter a and b Value\n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    max = (a > b)? a:b;
        printf("%d is Max value", max);
    return 0;
}