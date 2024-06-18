#include <stdio.h>

int main(){
    
    int wind_speed;
    char * wind_type;

   printf("Enter wind speed: ");
   scanf("%d", &wind_speed);
   
    if (wind_speed < 1){
        wind_type = "Calm";
    } else if (wind_speed < 4){
        wind_type = "Light air";
    } else if (wind_speed < 28){
        wind_type = "Breeze";
    } else if (wind_speed < 48){
        wind_type = "Gale";
    } else if (wind_speed < 64 ){
        wind_type = "Storm";
    } else{
        wind_type = "Hurricane";
    }

    printf("Wind type: %s", wind_type);

    return 0;
}