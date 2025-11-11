#include <stdio.h>

int main(void) {

    printf("Enter a first and last name: ");
    
    char c;
    char first[20];
    char last[20];
    
    int i = 0;

    while ((c = getchar()) != ' ') {
        first[i] = c;
        i++;
    }

    i = 0;

    while ((c = getchar()) != '\n') {
        if (c == ' ')
            continue;    
        last[i] = c;
        i++;
    }


    printf("%s, %c.\n", last, first[0]);

    return 0;
}
