#include <stdio.h>

int main (){

    int i, n;

    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    getchar();
   
    for (i = 1; i <= n; i++) {
        printf ("%d\t%d\n", i , i * i);

        if(i % 24 == 0){
            printf("Press enter to continue: ");
            while (getchar() != '\n'){
                ;
            }
        }
    }
    
    return 0;
}