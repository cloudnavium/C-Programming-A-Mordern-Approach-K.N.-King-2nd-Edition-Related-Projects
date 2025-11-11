#include <stdio.h>

int numdigits(int n);

int main(void) {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("There are %d digits in your number.\n", numdigits(n));

    return 0;
}

int numdigits(int n) {
    int len = 0;

    while (n != 0) {
        n /= 10;
        len++;
    };
    
    return len;
}
