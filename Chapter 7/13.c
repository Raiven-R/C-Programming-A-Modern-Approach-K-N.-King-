#include <stdio.h>

int main()
{
    float length, word_count = 1, character_count;
    char ch;

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n'){
        
        if(ch == ' '){
            word_count++;
        } else {
            character_count++;
        }
        
    }
    length = character_count / word_count;

    printf("Average length of word: %.1f", length);
    return 0;
}