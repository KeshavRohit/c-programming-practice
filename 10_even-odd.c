#include <stdio.h>
int main(){
    int number;
    printf("Check your number even or odd\n");
    printf("Enter a Number = ");
    scanf("%d", &number);
    if(number % 2 == 0){
        printf("Your number is Even = %d", number);
    }
    else{
        printf("Your number is Odd = %d", number);
    }
    return 0;
}