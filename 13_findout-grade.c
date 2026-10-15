#include <stdio.h>
int main(){
    int m1, m2, m3, m4, m5, total;
    float avg;
    printf("Find Out Your Grade\n");
    printf("Enter sub1 Marks = ");
    scanf("%d", &m1);
    printf("Enter sub2 Marks = ");
    scanf("%d", &m2);
    printf("Enter sub3 Marks = ");
    scanf("%d", &m3);
    printf("Enter sub4 Marks = ");
    scanf("%d", &m4);
    printf("Enter sub5 Marks = ");
    scanf("%d", &m5);
    total = m1+m2+m3+m4+m5;
    avg = (m1+m2+m3+m4+m5)/5.00;
    printf("Average = %.2f", avg);
    if(avg <= 100 && avg >= 90){
        printf("Grade O");
    }
    else if(avg < 90 && avg >= 80){
        printf("Grade A");
    }
    else if(avg < 80 && avg >= 70){
        printf("Grade B");
    }
    else if(avg < 70 && avg >= 60){
        printf("Grade C");
    }
    else if(avg < 60 && avg >= 45){
        printf("Grade D");
    }
    else if(avg < 45){
        printf("\nRESTART");
    }
    else {
        printf("\nInvalid Input");
    }
return 0;
}