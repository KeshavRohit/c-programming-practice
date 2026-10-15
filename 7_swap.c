#include <stdio.h>
int main(){
    int a, b, temp;
    printf("Before Swap\n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swap\na = %d\nb = %d", a, b);
    return 0;
}