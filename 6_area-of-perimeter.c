#include <stdio.h>
int main(){
    float r, peri;
    printf("Perimeter 0f Circle\nRedius : ");
    scanf("%f", &r);
    peri = 2*(22.0/7.0)*r;
    printf("Perimeter = %.2f", peri);
    return 0;
}