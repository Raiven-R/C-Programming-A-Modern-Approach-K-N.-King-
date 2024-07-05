#include <stdio.h>

typedef char name;

int main()
{ 
    name initial, first [50], last[50];

    printf("Enter a first and last name: ");
    scanf("%s %s", &first, &last);

    initial = first[0];

    printf("%s, %c.", last, initial);
    return 0;
}