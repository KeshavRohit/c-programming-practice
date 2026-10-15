#include <stdio.h>
void main(){
    int a, b;
    printf("Before swap\n");
    printf("a = "); scanf("%d", &a);
    printf("b = "); scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nAfter swap (without 3rd variable)\na = %d\nb = %d", a, b);

}