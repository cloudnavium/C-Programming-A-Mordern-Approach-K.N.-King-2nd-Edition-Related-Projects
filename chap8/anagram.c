#include <stdio.h>
#include <ctype.h>

int main(void) {

    int counter[26] = {0};
    int size = sizeof(counter)/sizeof(counter[0]);
    char ch;

    printf("Enter first word: ");
    while ((ch = toupper(getchar())) != '\n') {
        if (isalpha(ch)) {
            counter[ch - 'A']++;
        }
    }
    
    printf("Enter second word: ");
    while ((ch = toupper(getchar())) != '\n') {
        if (isalpha(ch)) {
            counter[ch - 'A']--;
        }
    }
    
    for (int i = 0, checker = 0; i < size; i++) {
        checker += counter[i];
        if (checker > 0) {
            printf("The words are not anagrams.\n");
            break;
        } else if (i + 1 == size)
            printf("The words are anagrams.\n");
    }

    return 0;
}

