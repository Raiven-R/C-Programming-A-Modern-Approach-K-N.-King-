#include <stdio.h>

int main (){

    int i, n, odd, square;

    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    
    odd = 3;
    
    for (i = 1, square = 1; i <= n; odd += 2, ++i) {
        printf ("%d\t%d\n", i , square); 
        square += odd;
    }

    return 0;
}