#include <stdio.h>

int main()
{ 
    char ch, initial;

    printf("Enter a first and last name: ");
    
    while((ch = getchar()) == ' '){
        ;
    }
    initial = ch;
   
    while ((ch = getchar()) != ' '){
        ;
    }

    while ((ch = getchar()) != '\n'){
        if (ch != ' ')
            putchar(ch);
    }
    
    printf(", %c.", initial);
    return 0;
}