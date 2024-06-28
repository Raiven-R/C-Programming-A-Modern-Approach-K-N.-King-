#include <stdio.h>

int main (){

    int number, reversed_number, remainder;

    printf("Enter an integer: ");
    scanf("%d", &number);

    for (; number != 0;){
        reversed_number = reversed_number * 10 + number % 10;
        number /= 10;
    }
    printf("Reversed number: %d", reversed_number);

    return 0;
}