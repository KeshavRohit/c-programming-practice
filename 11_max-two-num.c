#include <stdio.h>
int main(){
    float a, b;
    printf("Find maximun of two number\n");
    printf("Enter Your First Number A = ");
    scanf("%f", &a);
    printf("Enter Your Second Number B = ");
    scanf("%f", &b);
    if(a > b){
        printf("A is grater than B");
    }
    else{
        printf("B is grater than A");
    }
    return 0;
}