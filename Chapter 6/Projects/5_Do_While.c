#include <stdio.h>

int main(){

    int number, reversed_number, remainder;

    printf("Enter an integer: ");
    scanf("%d", &number);

    reversed_number = 0;
    do {
        remainder = number % 10;
        reversed_number = reversed_number * 10 + remainder;
        number /= 10;
    } while ( number != 0);

    printf("Reversed number: %d\n", reversed_number);

    return 0;    
}