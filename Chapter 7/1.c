#include <stdio.h>

int main (){

    int i, n;

    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf ("%d\t%d\n", i , i * i);
    }
    
    return 0;
}