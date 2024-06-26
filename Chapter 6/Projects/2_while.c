#include <stdio.h>

int main (){

    int m, n;

    printf("Enter 1st number: ");
    scanf("%d", &m);
    printf("Enter 2nd number: ");
    scanf("%d", &n);

    while (n != 0){

        int remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("Greatest common divisor: %d", m);

    return 0;
}