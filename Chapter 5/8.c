#include <stdio.h>

int main (){

    int time, hour, minute;

    printf("Enter time in 24 hour(##:##) format: ");
    scanf("%d:%d", &hour, &minute);

    time = hour * 60 + minute;

    if (time <= 480){
        printf("Closest departure time: 8:00 AM\nArrival Time: 10:16 AM");
    } else if (time <= 583){
        printf("Closest departure time: 9:43 AM\nArrival Time: 11:52 AM");
    } else if (time <= 679){
        printf("Closest departure time: 11:19 AM\nArrival Time: 1:31 PM");
    } else if (time <= 767){
        printf("Closest departure time: 12:47 PM\nArrival Time: 3:00 PM");
    } else if (time <= 849){
        printf("Closest departure time: 2:00 PM\nArrival Time: 4:08 PM");
    } else if (time <= 945){
        printf("Closest departure time: 3:45 PM\nArrival Time: 5:55 PM");
    } else if (time <= 1140){
        printf("Closest departure time: 7:00 PM\nArrival Time: 9:20 PM");
    } else if (time <= 1305){
        printf("Closest departure time: 9:45 PM\nArrival Time: 11:58 PM");
    } else {
        printf("Closest departure time: 8:00 AM\nArrival Time: 10:16 AM");
    }

    return 0;
}