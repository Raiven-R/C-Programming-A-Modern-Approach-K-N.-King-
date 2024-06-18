#include <stdio.h>

int main(){
    
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12;

    printf("Enter first 12 digits: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11, &d12);

    int first_sum = d2 + d4 + d6 + d8 + d10;
    int second_sum = d1 + d3 + d5 + d7 + d9 + d11; 

    int total = (3 * first_sum + second_sum) -1;

    printf("%s", d12 ==  (9 - (total % 10)) ? "Valid" : "Invalid");

    return 0;
}