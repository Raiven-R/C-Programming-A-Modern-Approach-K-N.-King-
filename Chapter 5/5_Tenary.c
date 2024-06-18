#include <stdio.h>

int main (){

    float income, income_tax;

    printf("Enter income: ");
    scanf("%f", &income);

    income_tax = (income <= 750) ? income * .01 :
                 (income <= 2250) ? 7.50 + (income * .02) :
                 (income <= 3750) ? 37.50 + (income * .03) :
                 (income <= 5250) ? 82.50 + (income * .04) :
                 (income <= 7000) ? 142.50 + (income * .05) :
                 230 + (income * .06); 

    printf("Income text: %.2f", income_tax);

    return 0;
}