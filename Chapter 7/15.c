#include <stdio.h>

typedef int factorial;

int main ()
{
    int num;
    factorial factorial = 1;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++){
        factorial *= i;
    }
        
    printf("Factorial of %d: %d", num, factorial);
    return 0;
}

/*  a. largest value of short : 7
    b. largest value of int : 12
    c. largest value of long : 12
    d. largest value of long long : 21
    e. largest value of float : 34
    f. largest value of double : **
    g. largest value of long double : **
*/