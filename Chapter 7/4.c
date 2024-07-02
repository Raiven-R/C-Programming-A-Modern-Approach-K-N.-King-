#include <stdio.h>

int main ()
{
    int ch;
    
    printf("Enter an alphabetical phone number: ");

    while((ch = getchar()) != '\n'){
        
        switch (ch){
            case 'A': case 'B': case 'C':
            printf("2");
            break;
            
            case 'D': case 'E': case 'F':
            printf("3");
            break;

            case 'G': case 'H': case 'I':
            printf("4");
            break;

            case 'J': case 'K': case 'L':
            printf("5");
            break;

            case 'M': case 'N': case 'O':
            printf("6");
            break;

            case 'P': case 'Q': case 'R':
            printf("7");
            break;

            case 'S': case 'T': case 'U':
            printf("8");
            break;

            case 'V': case 'W': case 'X': case 'Z':
            printf("9");
            break;

            default: 
            putchar(ch);
        }
    }
   
    return 0;
}