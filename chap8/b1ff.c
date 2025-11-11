#include <stdio.h>
#include <ctype.h>

int main(void) {
    
    char translations[2][6] = 
    {
        {'a', 'b', 'e', 'i', 'o', 's'},
        {'4', '8', '3', '1', '0', '5'}
    };
    char message[50], c;
    int len = (int) sizeof (translations[0]) / sizeof (translations[0][0]);
    printf("Enter message: ");
    
    for (int i = 0; (c = getchar()) != '\n'; i++) {
        if (i == 0)
            printf("In B1FF-speak: ");
        message[i] = c;
        for (int j = 0; j < len; j++) {
            if (tolower(message[i]) == translations[0][j]) {
                printf("%c", toupper(translations[1][j]));
                break;
            }
            else if (j == len - 1) {
                printf("%c", toupper(message[i]));
            }
        }
    }

    printf("!!!!!!!!!!\n");

    return 0;
}
        

