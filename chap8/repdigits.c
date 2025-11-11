#include <stdio.h>

int main(void) {

    char used[10] = {0};
    int n;

    printf("Enter a number: ");
    
    while ((n = getchar()) != '\n') {
        if (used[n - '0'] == 1) {
        }
        used[n - '0'] += 1;
    }
    
    printf("Repeated digit (s): ");

    for (int i = 0; i < sizeof (used) / sizeof (used[0]); i++) {
        if (used[i] > 1)
            printf("%2d", i);
    }

    printf("\n");

    return 0;

}
