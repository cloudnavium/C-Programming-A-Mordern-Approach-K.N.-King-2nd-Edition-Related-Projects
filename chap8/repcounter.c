#include <stdio.h>

int main(void) {

    char used[10] = {0};
    int n;

    printf("Enter a number: ");
    
    while ((n = getchar()) != '\n') {
        used[n - '0'] += 1;
    }
       
    printf("Digit:       ");
    for (int i = 0; i < sizeof (used) / sizeof (used[0]); i++) {
        printf("%3d", i);
    }

    printf("\nOccurrences: ");
    for (int i = 0; i < sizeof (used) / sizeof (used[0]); i++) {
        printf("%3d", used[i]);
    }
    
    printf("\n");

    return 0;

}
