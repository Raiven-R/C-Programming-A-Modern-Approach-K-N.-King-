#include <stdio.h>

int main (){

    int hour, minute;

    printf("Enter time in 24 hour format: ");
    scanf("%d:%d", &hour, &minute);

    if(hour >= 24 || hour < 0 || minute < 0 || minute >= 60){
        printf("Invalid time");
    } else {
        int hour_12 = (hour == 0 || hour == 12) ? 12 : hour % 12;
        char * period = (hour < 12) ? "AM" : "PM";
        printf("12 hour format: %d:%02d %s", hour_12, minute, period);
    }
    return 0; 
}