#include <stdio.h>

int main (){

    int number, first_digit, last_digit;

    printf("Enter a two digit number: ");
    scanf("%d", &number);

    first_digit = number / 10;
    last_digit = number % 10;

    if (number < 10 || number > 99){
        printf("Invalid input");
    } else if (first_digit == 1){
        switch (last_digit){
            case 0: printf("Ten"); break;
            case 1: printf("Eleven"); break;
            case 2: printf("Twelve"); break;
            case 3: printf("Thirteen"); break;
            case 4: printf("Fourteen"); break;
            case 5: printf("Fifteen"); break;
            case 6: printf("Sixteen"); break;
            case 7: printf("Seventeen"); break;
            case 8: printf("Eighteen"); break;
            case 9: printf("Nineteen"); break;
        }
    } else {
        switch (first_digit){
            case 2: printf("Tweenty "); break;
            case 3: printf("Thirty "); break;
            case 4: printf("Fourty "); break;
            case 5: printf("Fifty "); break;
            case 6: printf("Sixty "); break;
            case 7: printf("Seventy "); break;
            case 8: printf("Eighty "); break;
            case 9: printf("Ninety "); break;
        }
        switch (last_digit){
           case 1: printf("One"); break;
           case 2: printf("Two"); break;
           case 3: printf("Three"); break;
           case 4: printf("Four"); break;
           case 5: printf("Five"); break;
           case 6: printf("Six"); break;
           case 7: printf("Seven"); break;
           case 8: printf("Eight"); break;
           case 9: printf("Nine"); break;
    }
    }
    return 0;
}