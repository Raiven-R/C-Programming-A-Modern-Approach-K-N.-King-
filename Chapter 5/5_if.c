#include <stdio.h>

int main (){

    float income, income_tax;

    printf("Enter income: ");
    scanf("%f", &income);

    if (income <= 750){
        income_tax = income * .01;
    } else if ( income <= 2250){
        income_tax = 7.50 + (income * .02);
    } else if ( income <= 3750){
        income_tax = 37.50 + (income * .03);
    } else if ( income <= 5250){
        income_tax = 82.50 + (income * .04);
    } else if ( income <= 7000){
        income_tax = 142.50 + (income * .05);
    } else {
        income_tax = 230 + (income * .06);
    }

    printf("Income text: %.2f", income_tax);

    return 0;
}