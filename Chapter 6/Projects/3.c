#include <stdio.h>

int main (){

    int num, denum, m, n, remainder;

    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &denum);

   m = num;
   n = denum;
   
    while (n != 0){

        int remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("In lowest terms: %d/%d", num / m, denum / m);

    return 0;
}