#include <stdio.h>
#include <math.h>

int main ()
{
    double x, y = 1.0f, guess;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    for (; ;){

        guess = (y + x / y) / 2;

        if (fabs (y - guess) < (0.00001 * y)){
            break;
        }
         
        y = guess;
    }
    printf("Square root: %f", y);
    
    
    return 0;
}