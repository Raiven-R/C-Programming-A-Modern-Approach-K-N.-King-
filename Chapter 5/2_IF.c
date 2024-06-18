#include <stdio.h>

int main (){

    int hour, minute;

    printf("Enter time in 24 hour format: ");
    scanf("%d:%d", &hour, &minute);

    if(hour > 24 || hour < 0 || minute > 0 || minute < 60){
        printf("Invalid time");
    } else if (hour == 0){
        printf("12 hour format: 12:%02d AM", minute);
    } else if(hour < 12){
        printf("12 hour format: %d:%02d AM", hour, minute);
    } else if (hour > 11){
        printf("12 hour format: %d:%02d PM", hour, minute);
    }

    return 0; 
}