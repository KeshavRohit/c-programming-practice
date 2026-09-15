#include <stdio.h>
int main(){
    float c, f;
    printf("Celsius to Fahrenheit\n\nCelsius : ");
    scanf("%f", &c);
    f = (9/5)*c + 32;
    printf("Fahrenheit = %.2f", f);
    return 0;
}