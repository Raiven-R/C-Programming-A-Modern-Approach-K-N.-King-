#include <stdio.h>

int main (){

    double n, sum = 0.0f;
    
    printf("Enter a series of interger(0 to terminate): ");
    scanf("%lf", &n);

    while (n != 0.0f){

        sum += n;
        scanf("%lf", &n);
    }
   
    printf("Sum : %lf\n", sum);
    return 0;
}