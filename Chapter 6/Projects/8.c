#include <stdio.h>

int main(){

    int days, starting_day;

    printf("Enter number of days: ");
    scanf("%d", &days);
    printf("Enter starting day of the week (1 = sunday, 7 = saturday): ");
    scanf("%d", &starting_day);

    if (days < 28 || days > 31 || starting_day < 1 || starting_day > 7){
        printf("Invalid input");
        return 1;
    }

    printf("\nSun Mon Tue Wed Thu Fri Sat\n");

    for (int i = 1; i < starting_day; i++){
        printf("    ");
    }
    for(int i = 1; i <= days; i++){
        printf("%-4d", i);

        if((i + starting_day -1) % 7 == 0){
            printf("\n");
        }
    }
    return 0;
}