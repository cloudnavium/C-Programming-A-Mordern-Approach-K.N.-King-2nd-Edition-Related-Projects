#include <stdio.h>
#include <math.h>

float compute_polynomial (int x);

int main (void) 
{
    int x;
    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("The result is %.2f\n", compute_polynomial(x));

    return 0;
}

float compute_polynomial (int x) 
{
    float sum = 0;
    sum += 3 * pow(x, 5);
    sum += 2 * pow(x, 4);
    sum -= 5 * pow(x, 3);
    sum -= pow(x, 2);
    sum += 7 * x;
    sum -= 6;

    return sum;
}


