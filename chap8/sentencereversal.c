#include <stdio.h>
#include <string.h>

int main(void) {
    
    char punctuation;
    char sentence[100];
    int word[15] = {0};
    printf("Enter a sentence: ");
    
    char ch;
    int i = 0;
    while ((ch = getchar()) != '.' && ch != '!' && ch != '?') {
        sentence[i] = ch;
        i++;
    }
    
    sentence[i] = ' ';
    i++;
    sentence[i] = '\0';
    int len = strlen(sentence);
    punctuation = ch;

    for (int i = len, i2 = 0; i >= 0; i--) {
        if (sentence[i - 1] == ' ') {
            word[i2] = i;
            i2++;
        }
    }
    
    for (int i = 0, i2 = len; i < sizeof(word)/sizeof(word[0]); i++) {
        for (int j = word[i]; j < i2; j++) {
            if (word[i] == 0 && j + 1 == i2) {
                j = i2;
                break;
            }
            printf("%c", sentence[j]);
        }
        i2 = word[i];
    }

    printf("%c\n", punctuation);

    return 0;
}
        
