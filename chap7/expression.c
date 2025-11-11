#include <stdio.h>

int main(void) {
   
    float total = 0, n;
    char operand;

    printf("Enter an expression: ");
    scanf("%f%c", &total, &operand);

    while (operand != '\n') {
        scanf("%f", &n);

        if (operand == '-')
            total -= n;
        else if (operand == '*')
            total *= n;
        else if (operand == '/')
            total /= n;
        else if (operand == '+')
            total += n;
        
        operand = getchar();
    } 
    
    printf("Value of expression: %.2f\n", total);

    return 0;

    /* This did not work 
    char c;

    printf("Enter an expression: ");
    float total = (float) getchar();
    
    printf("Total = %f\n", total);

    while ((c = getchar()) != '\n') {     
        if (c == '+') {
            c == getchar();
            total += c;
        } else if (c == '-') {
            c == getchar();
            total -= c;
        } else if (c == '*') {
            c == getchar();
            total *= c;
        } else if (c == '/') {
            c == getchar();
            total /= c;
        }
    }
    */

}


