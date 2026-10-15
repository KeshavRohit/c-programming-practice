#include <stdio.h>
int main(){
    char character;
    printf("Enter your character\n");
    printf("Alphabet = ");
    scanf("%c", &character);
    switch (character)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("This is an Vowel");
        break;
    
    default:
        printf("This is a Consonent");
        break;
    }
    
    return 0;
}