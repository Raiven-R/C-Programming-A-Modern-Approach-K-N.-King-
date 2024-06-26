#include <stdio.h>

int main (){

    float loan, interest, monthly_payment, no_of_payment;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment amount: ");
    scanf("%f", &monthly_payment);
    printf("Enter no of monthly payment: ");
    scanf("%f", &no_of_payment);

    int i = 1;
    for (i = 1; i <= no_of_payment; i++){
        loan = loan - monthly_payment + (loan * (interest / 100) / 12);
    }

    printf("Balance remaining after %d monthly payment: %.2f", i, loan);

    return 0;
}