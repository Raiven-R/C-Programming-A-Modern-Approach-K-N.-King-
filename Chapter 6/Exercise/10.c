#include <stdio.h>

int main (){

    int i;

    for(i = 0; i <= 10; i++){

        if (i % 2 == 0)
            goto end;
             printf("%d\n", i);
             end:;
    }
   
   
    return 0;
}