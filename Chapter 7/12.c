#include <stdio.h>

int main ()
{
    float num, value;
    num = value = 0.0f;

    char ch;

    printf("Enter an expression: ");
    scanf("%f", &value);

    while((ch = getchar()) != '\n'){

        switch(ch){
            
            case '+':
            scanf("%f", &num);
            value += num;
            break;

            case '-':
            scanf("%f", &num);
            value -= num;
            break;
          
            case '*':
            scanf("%f", &num);
            value *= num;
            break;
          
            case '/':
            scanf("%f", &num);
            value /= num;
            break;

            default:  continue;
        }
    }

    printf("Value of expression: %.2f", value);
    return 0;

}