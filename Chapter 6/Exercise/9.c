#include <stdio.h>

int main (){

    /*for(int i = 10; i >= 1; i /= 2){
        printf("%d ", i++);
    }*/
    int i = 10;
    while (i >+ 1){
        
        printf("%d ", i++);
        i++;
        i /=2;
    }
   
    return 0;
}