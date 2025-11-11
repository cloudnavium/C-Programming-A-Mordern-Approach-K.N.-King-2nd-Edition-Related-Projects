#include <stdio.h>
#include <ctype.h>

int main(void) {
    
    printf("Enter a sentence: ");
    char c = tolower(getchar());
    int total; 

    for (total = 0; c != '\n'; c = tolower(getchar())) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            total++;
    }

    printf("Your sentence contains %d vowels.\n", total);

    return 0;

}
