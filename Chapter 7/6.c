#include <stdio.h>

int main ()
{
    printf("Size of int is %zu bytes\n", sizeof(int));
    printf("Size of short is %zu bytes\n", sizeof(short));
    printf("Size of long is %zu bytes\n", sizeof(long));
    printf("Size of float is %zu bytes\n", sizeof(float));
    printf("Size of double is %zu bytes\n", sizeof(double));
    printf("Size of long double is %zu bytes\n", sizeof(long double));

    return 0;

}