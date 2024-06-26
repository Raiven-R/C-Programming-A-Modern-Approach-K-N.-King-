#include <stdio.h>

int main (){

    float i, largest = 0;
    
    for (int n = 1; ;n++){
       switch(n){
        case 1: printf("Enter 1st number (0 or negative to terminate): ");
        break;

        case 2: printf("Enter 2nd number (0 or negative to terminate): ");
        break;

        case 3: printf("Enter 3rd number (0 or negative to terminate): ");
        break;

        default : printf("Enter %dth number (0 or negative to terminate): ", n);
        break;
       } 
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