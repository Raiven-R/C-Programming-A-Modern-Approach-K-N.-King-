#include <stdio.h>

int main (){

    float shares, share_price, value, commission, rival_commission;

    printf("Enter number of shares: ");
    scanf("%f", &shares);
    printf("Enter the price of share: ");
    scanf("%f", &share_price);

    value = shares * share_price;

    if (value < 2500){
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

    // Rival commission

    if (shares < 2000){
        rival_commission = 33 + (.03 * shares);
    }else {
        rival_commission = 33 + (.02 * shares);
    }
    
    printf("Commission rate: %.2f\n", commission);
    printf("Rival Commission rate: %.2f", rival_commission);


    return 0;
}