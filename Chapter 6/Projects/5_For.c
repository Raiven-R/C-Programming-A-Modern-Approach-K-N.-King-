#include <stdio.h>

int main(){

    int number, reversed_number = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &number);

    for (; number != 0; ){

        remainder = number % 10;
        reversed_number = reversed_number * 10 + remainder;
        number /= 10;
    }

    printf("Reversed number: %d\n", reversed_number);

    return 0;    
}