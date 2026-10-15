#include <stdio.h>
int main(){
    int a, b, c, max;
    printf("Enter a, b and c Value\n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);
    max = (a > b)? ((a>c)? a:c): ((b>c)? b:c);
        printf("%d is Max value", max);
    return 0;
}