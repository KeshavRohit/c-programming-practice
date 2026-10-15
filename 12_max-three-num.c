#include <stdio.h>
int main(){
    float a, b, c;
    printf("Find maximun of Three number\n");
    printf("Enter Your First Number A = ");
    scanf("%f", &a);
    printf("Enter Your Second Number B = ");
    scanf("%f", &b);
    printf("Enter Your Third Number C = ");
    scanf("%f", &c);
    if(a > b){
        if(a > c){
            printf("A is grater than B and C");
        }
        else{
            printf("C is grater than A and B");
        }
        
    }
    else{
        if(b > c){
            printf("B is grater than A and C");
        }
        else{
            printf("C is grater than A and B");
        }
    }
    return 0;
}