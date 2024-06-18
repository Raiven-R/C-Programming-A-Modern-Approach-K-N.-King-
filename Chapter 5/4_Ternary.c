#include <stdio.h>

int main(){
    
    int wind_speed;

   printf("Enter wind speed: ");
   scanf("%d", &wind_speed);
   
    char * wind_type = (wind_speed < 1) ? "Calm" : 
                       (wind_speed < 4) ? "Light air" : 
                       (wind_speed < 28) ? "Breeze" : 
                       (wind_speed < 48) ? "Gale" : 
                       (wind_speed < 64) ? "Storm" : 
                       "Hurricane";

    printf("Wind type: %s", wind_type);

    return 0;
}