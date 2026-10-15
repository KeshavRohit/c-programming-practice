#include <stdio.h>
 void main(){
    int age;
    printf("Check Vote Eligiblity\n");
    printf("Enter Your Age = ");
    scanf("%d", &age);
    if(18 <= age){
        printf("You are eligible to Vote = %d", age);
    }
    if(18 >= age){
        printf("You are Not eligible to Vote = %d", age);
    }
    
}