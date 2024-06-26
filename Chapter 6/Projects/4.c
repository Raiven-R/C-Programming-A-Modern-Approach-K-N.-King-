#include <stdio.h>

int main (){

    float commission, value;

    for(; ;){

        printf("Enter value of trade: ");
        scanf("%f", &value);

        if(value == 0){
            break;
        } else if (value < 2500){
        commission = value * (1.7 / 100) + 30;
        } else if (value < 6250){
            commission = value * (.66 / 100) + 56;
        } else if (value < 20000){
            commission = value * (.34 / 100) + 76;
        } else if (value < 50000){
            commission = value * (.22 / 100) + 100;
        } else if (value < 5000000){
            commission = value * (.11 / 100) + 155;
        } else{
            commission = value * (.09 / 100) + 255;
        }  
        if (commission < 39){
            commission = 39;
        }
       
        printf("Commission: %.2f\n", commission);

    }
    
    return 0;
}