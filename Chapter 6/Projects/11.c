/*The value or the mathemacical constant e can be expressed as an infinite series:
e = 1 + 1/1! + 1/2! + 1/3 ! + ...

Write a program that approximates e by conmputing the value of
1 + 1/1! + 1/2! + 1/3! + ... + 1/n!
where n is an integer entered by the user.*/



#include <stdio.h>

int main (){

    int n;
    float e = 1.0f;

    printf("Enter a number: ");
    scanf("%d", &n);

    int i, factorial = 1;
    for (i = 1; i <= n; i++){

        factorial *= i;
        e += (1.0f / factorial);
    }

    printf("%.2f", e);
   
    return  0;
}