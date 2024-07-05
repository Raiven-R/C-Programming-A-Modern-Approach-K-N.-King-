#include <stdio.h>
#include <ctype.h>

int main ()
{
  char ch;
  int vowel = 0;

  printf("Enter a sentence: ");
  
  while ((ch = getchar()) != '\n'){
    ch = toupper(ch);

    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        vowel++;
    }
  }
  
  printf("Sentence contains %d vowel(s).", vowel);
  return 0;
}