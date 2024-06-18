#include <stdio.h>

int main(){

    int number;

    printf("Enter a number(less than five digits): ");
    scanf("%d", &number);

    if(number < 10){
        printf("one digit");
    } else if (number < 100){
        printf("Two digits");
    } else if (number < 1000){
        printf("Three digits");
    } else if(number < 10000){
        printf("Four digits");
    } else{
        printf("Invalid number");
    }
    return 0;
}
