#include <stdio.h>

int digit(int n, int k);

int main(void) {
    int n, k;

    printf("Enter number and position of desired number: ");
    scanf("%d %d", &n, &k);

    printf("%d\n", digit(n, k));

    return 0;
}

int digit(int n, int k) {
    
    if (k > n)
        return 0;

    for (int i = 0; i < k; i++) {
        if (i + 1 == k) {
            n %= 10;
            return n;
        }
        else {
            n /= 10;
        }
    }
}



