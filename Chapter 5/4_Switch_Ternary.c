#include <stdio.h>

int main(){
    
    int wind_speed, wind_type;

   printf("Enter wind speed: ");
   scanf("%d", &wind_speed);
   
    wind_type = (wind_speed < 1) ? 1:
                       (wind_speed < 4) ? 2 :
                       (wind_speed < 28) ? 3 :
                       (wind_speed < 48) ? 4 :
                       (wind_speed < 64) ? 5 :
                       (wind_speed > 63) ? 6 : 7;

    switch(wind_type){
        
        case 1: printf("Calm"); break;
        case 2: printf("Light air"); break;
        case 3: printf("Breeze"); break;
        case 4: printf("Gale"); break;
        case 5: printf("Storm"); break;
        case 6: printf("Hurricane");
    }

    return 0;
}