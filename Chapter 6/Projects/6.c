#include <stdio.h>

int main (){

    int i, n;

    printf("Enter highest value of square: ");
    scanf("%d", &n);

    for (i = 1; i * i <= n; i++) {

        if ((i * i) % 2 != 0){
            continue;
        }
        printf ("%d\t%d\n", i , i * i);
    }
    
    return 0;
}