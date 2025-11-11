#include <stdio.h>
#define N 40

int main(void) {

    printf("This program prints the first %d Fibonacci Numbers.\n", N); 

    int fib_numbers[N] = {[1] = 1};

    for (int i = 2; i < N; i++) {
        fib_numbers[i] = fib_numbers[i - 1] + fib_numbers[i - 2];
    }
    
    for (int i = 0; i < N; i++)
        printf("%-5d%2d\n", i + 1, fib_numbers[i]);

    return 0;

}


