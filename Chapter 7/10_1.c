#include <stdio.h>
#include <ctype.h>

int main ()
{
  char ch;
  int vowel = 0;

  printf("Enter a sentence: ");
  ch = getchar();
  
  while (ch != '\n'){
    ch = toupper(ch);

    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        vowel++;
    }
    ch = getchar();
  }
  
  printf("Sentence contains %d vowel(s).", vowel);
  return 0;
}
