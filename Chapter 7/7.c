#include <stdio.h>

int main ()
{
    int n1, d1, n2, d2, f1, f2;
    char  operator;

    printf("Enter two fractions: ");
    scanf("%d/%d %c %d/%d", &n1, &d1, &operator, &n2, &d2);

    switch (operator){
        
        case '+':
        f1 = n1 * d2 + n2 * d1;
        f2 = d1 * d2;
        break;

        case '-':
        f1 = (n1 * d2) - (n2 * d1);
        f2 = d1 * d2;
        break;

        case '*':
        f1 = n1 * n2;
        f2 = d1 * d2;
        break;

        case '/':
        f1 = n1 * d2;
        f2 = n2 * d1;
        break;
    }

    printf("Value: %d/%d", f1, f2);
    return 0;
}