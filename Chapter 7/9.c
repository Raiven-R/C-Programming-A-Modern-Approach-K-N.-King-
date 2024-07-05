#include <stdio.h>

int main ()
{
    int time, hour, minute;
    char ch;

    printf("Enter time in 12 hour format: ");
    scanf("%d:%d %c", &hour, &minute, &ch);

    time = ((ch == 'P' ? 12 : 0)) + hour;

    printf("24 hour equivalent time: %d:%d %cM", time, minute, ch);
    return 0;
    
    //time = (((toupper(ch) == 'P' ? 12 : 0) + hour) * 60) + minute;
}