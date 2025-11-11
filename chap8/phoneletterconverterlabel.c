#include <stdio.h>
#include <ctype.h>

int main(void) {
    
    char numbers[15];
    int size = sizeof (numbers) / sizeof (numbers[0]);
    printf("Enter phone number (letters allowed): ");

    char ch;
    int i = 0;
    while ((ch = toupper(getchar())) != '\n') {
        if (ch == 'A' || ch == 'B' || ch == 'C')
            numbers[i] = '2';
        else if (ch == 'D' || ch == 'E' || ch == 'F')
            numbers[i] = '3';
        else if (ch == 'G' || ch == 'H' || ch == 'I')
            numbers[i] = '4';
        else if (ch == 'J' || ch == 'K' || ch == 'L')
            numbers[i] = '5';
        else if (ch == 'M' || ch == 'N' || ch == 'O')
            numbers[i] = '6';
        else if (ch == 'P' || ch == 'R' || ch == 'S')
            numbers[i] = '7';
        else if (ch == 'T' || ch == 'U' || ch == 'V')
            numbers[i] = '8';
        else if (ch == 'W' || ch == 'X' || ch == 'Y')
            numbers[i] = '9';
        else
            numbers[i] = ch;
        i++;
        }
    
    numbers[i] = '\0';
    
    printf("In numeric form: %s", numbers);

    printf("\n");

    return 0;

}
