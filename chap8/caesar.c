#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void) {
    
    char message[80];
    char altered[80];
    char ch;
    int shift, i = 0;
    bool lower = {false};

    printf("Enter message to be altered: ");

    while ((ch = getchar()) != '\n') {
        message[i++] = ch;
    }
    
    message[i] = '\0';

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    i = 0;

    // Encrypts
    while (message[i] != '\0') {
        if (message[i] >= 'a' && message[i] <= 'z') {
            lower = true;
        }
        if (toupper(message[i]) >= 'A' && toupper(message[i]) <= 'Z') {
            if (toupper(message[i]) + shift > 'Z') {
                if (lower) {
                    altered[i] = tolower(((toupper(message[i]) - 'A') + shift) % 26 + 'A');
                }
                else {
                    altered[i] = ((message[i] - 'A') + shift) % 26 + 'A';
                }
            } 
            else {
                altered[i] = message[i] + shift;
            }
        } 
        else {
            altered[i] = message[i];
        }
        printf("%c", altered[i]);
        i++;
        lower = false;
    }

    printf("\n");

    return 0;

}
