#include <stdio.h>

int main (){

    float commission, value;

    for(; ;){

        printf("Enter value of trade: ");
        scanf("%f", &value);

        if(value == 0){
            break;
        } 

        commission = (value < 2500) ? value * (1.7 / 100) + 30 :
                     (value < 6250) ? value * (.66 / 100) + 56 :
                     (value < 20000) ? value * (.34 / 100) + 76 :
                     (value < 50000) ? value * (.22 / 100) + 100 :
                     (value < 500000) ? value * (.11 / 100) + 155 :
                     value * (.09 / 100) + 255;

       
        printf("Commission: %.2f\n", commission);

    }
    
    return 0;
}