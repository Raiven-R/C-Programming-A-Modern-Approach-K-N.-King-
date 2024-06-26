#include <stdio.h>

int main (){

    float i, largest = 0;
    int n = 1;

    for (; ;){
        printf("Enter %d number(0 or negative number to terminate): ", n++);
        scanf("%f", &i);

        if (i <= 0){
            break;
        }
        
        if ( i > largest){
            largest = i;
        }
        
    }

     

    printf("%.2f", largest);

    return 0;
}