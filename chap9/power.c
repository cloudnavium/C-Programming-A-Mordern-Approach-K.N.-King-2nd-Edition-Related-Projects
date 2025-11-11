#include <stdio.h>

double power(double x, int n) {
    if (n == 0) return 1.0;
    if (n < 0)  return 1.0 / power(x, -n);        // optional: handle negative n

    if (n % 2 == 0) {
        double half = power(x, n / 2);
        return half * half;
    } else {
        return x * power(x, n - 1);
    }
}

int main(void) {
    double x;
    int n;

    printf("Enter x and n: ");
    if (scanf("%lf %d", &x, &n) != 2) return 1;

    printf("Result: %.10g\n", power(x, n));
    return 0;
}



