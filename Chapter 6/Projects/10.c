#include <stdio.h>

int main (){

    int d, m, y, d1 = 0, m1 = 0, y1 = 0, count = 0;

    for(; ;){
       
        printf("Enter a date: ");
        scanf("%d/%d/%d", &m, &d, &y);

        if (m == 0 && d == 0 && y == 0){
            break; 
        }
        if (count == 0){
            y1 = y; m1 = m; d1 = d;
            count++;
            continue;   
      
        } else{
            y1 = (y > y1) ? y1 = y : y;
            m1 = (m > m1) ? m1 = m : m;
            d1 = (d > d1) ? d1 = d : d;   
        }
    }

    printf("%d/%d/%.2d",m1, d1, y1);

    return 0;
}