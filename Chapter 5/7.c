#include <stdio.h>

int main (){

    int num_1, num_2, num_3, num_4, max_1, max_2, min_1, min_2, max, min;

    printf("Enter four integers with space: ");
    scanf("%d%d%d%d", &num_1, &num_2, &num_3, &num_4);

    if (num_1 > num_2){
        max_1 = num_1;
        min_1 = num_2;
    } else{
        max_1 = num_2;
        min_1 = num_1;
    }
    if (num_3 > num_4){
        max_2 = num_3;
        min_2 = num_4;
    } else {
        max_2 = num_4;
        min_2 = num_3;
    }
    if (max_1 > max_2){
        max = max_1;
    } else {
        max = max_2;
    }
    if (min_1 > min_2){
        min = min_1;
    } else{
        min = min_2;
    }

    printf("Highest number: %d\nLowest number: %d\n", max, min);

    return 0;
}