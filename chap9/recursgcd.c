#include <stdio.h>

int gcd(int a, int b);

int main(void) {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("The greatest common divisor is: %d\n", gcd(a, b));
    
    return 0;
}

int gcd(int a, int b) 
{
    int r = a % b;
    while (r != 0) {
        r = a % b;
        a = b;
        b = r;
        printf("r = %d, a = %d, b = %d\n", r, a, b);
    }

    return a;
}
