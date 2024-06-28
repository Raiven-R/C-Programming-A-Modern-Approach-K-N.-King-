#include <stdio.h>

int main (){
    
    int d, m, y, d1 = 0, m1 = 0, y1 = 0, count = 0;

    for(; ;){
        printf("Enter a date (dd/mm/yy) (0 to terminate): ");
        scanf("%d/%d/%d", &d, &m, &y);

        if (d == 0 || m == 0 || y == 0)
            break;

        if (count == 0){
            y1 = y, m1 = m, d1 = d;
            count++;
            continue;
        }
        else if (y < y1 || (y == y1 && m < m1) || (y == y1 && m == m1 && d < d1)){
            y1 = y, m1 = m, d1 = d;
        }
    }
    printf("Earliest date: %d/%d/%.2d", d1, m1, y1);

    return 0;
}