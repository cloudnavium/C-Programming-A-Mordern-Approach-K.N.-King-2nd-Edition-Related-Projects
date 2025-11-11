#include <stdio.h>

int gcd(int m, int n);

int main(void) {
    
    int m, n;
    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    printf("The greatest common divisor is %d\n", gcd(m,n));

    return 0;
}

int gcd(int m, int n) {
    int r = 1;

    while (r != 0) {
        r = m % n;
        m = n;
        n = r;
    }
    return m;
}
    



