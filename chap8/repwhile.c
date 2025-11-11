#include <stdio.h>

int main(void) {

    char used[10] = {0};
    int n, size;
    
    size = sizeof (used) / sizeof (used[0]);

    printf("Enter a number: ");
    n = getchar() - '0';
     
    while (n > 0) {
        used[n] += 1; 
        while ((n = getchar()) != '\n') {
            used[n - '0'] += 1;
        }

        printf("Digit:       ");
        for (int i = 0; i < size; i++) {
            printf("%3d", i);
        }

        printf("\nOccurrences: ");
        for (int i = 0; i < size; i++) {
            printf("%3d", used[i]);
        }
        
        printf("\n");

        for (int i = 0; i < size; i++) {
            used[i] = 0;
        }

        printf("Enter a number: ");
        n = getchar() - '0';
     }
    return 0;

}
