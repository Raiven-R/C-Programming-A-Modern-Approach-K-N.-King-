#include <stdio.h>

int main (){

    int i = 9874; // digit = 0;

    do {
        printf("%d ", i);
         i /= 10;
         //digit++;

    } while (i > 0);

    //printf("%d", digit);
    return 0;
}