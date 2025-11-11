#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main(void) {

    int points[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    int size = sizeof (points) / sizeof (points[0]);
    int total = 0;
    char ch;
    
    printf("Enter a word: ");

    while ((ch = toupper(getchar())) != '\n') {
        total += points[ch - 'A'];
    }

    printf("Scrabble value: %d\n", total);

    return 0;
}
        
