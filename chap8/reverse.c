#include <stdio.h>
#define N 10

int main(void) {

    int numbers[N];
    int len = (int) (sizeof (numbers) / sizeof (numbers[0]));

    printf("Enter %d numbers: ", N);

    for (int j = 0; j < len; j++) {
       scanf("%d", &numbers[j]);
    }
    
    printf("In reverse order: ");
    for (int j = (len - 1); j >= 0; j--) {
        printf("%5d", numbers[j]);
    }
    
    printf("\n");

    return 0;
}


