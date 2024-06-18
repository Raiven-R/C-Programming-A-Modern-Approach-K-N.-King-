#include <stdio.h>

int main (){

    int date_1, date_2, month_1, month_2, year_1, year_2;

    printf("Enter first date(mm/dd/yy): ");
    scanf("%d/%d/%d", &date_1, &month_1, &year_1);
    printf("Enter second date(mm/dd/yy): ");
    scanf("%d/%d/%d", &date_2, &month_2, &year_2);

    if (year_2 > year_1){
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d", date_1, month_1, year_1, date_2, month_2, year_2);
    } else if (year_1 > year_2){
         printf("%d/%d/%.2d is earlier than %d/%d/%.2d", date_2, month_2, year_2, date_1, month_1, year_1);
    } else if (month_2 > month_1){
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d", date_1, month_1, year_1, date_2, month_2, year_2);
    } else if (month_2 > month_1){
         printf("%d/%d/%.2d is earlier than %d/%d/%.2d", date_2, month_2, year_2, date_1, month_1, year_1);
    } else if (date_1 > date_2){
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d", date_1, month_1, year_1, date_2, month_2, year_2);
    } else if (date_1 > date_2){
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d", date_1, month_1, year_1, date_2, month_2, year_2);
    } else {
        printf("%d/%d/%.2d is equal to %d/%d/%.2d", date_1, month_1, year_1, date_2, month_2, year_2);
    }
    return 0;
}