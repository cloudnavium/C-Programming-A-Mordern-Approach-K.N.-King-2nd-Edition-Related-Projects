#include <stdio.h>
#include <ctype.h>

int main(void) {

  char ch;
  int total = 0;

  printf("Enter a word: ");

  while ((ch = toupper(getchar())) != '\n') {
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'L' || ch == 'N' || ch == 'O' || ch == 'R' || ch == 'S' || ch == 'T' || ch == 'U')
      total += 1;
    else if (ch == 'D' || ch == 'G')
      total += 2;
    else if (ch == 'B' || ch == 'C' || ch == 'M' || ch == 'P')
      total += 3;
    else if (ch == 'F' || ch == 'H' || ch == 'V' || ch == 'W' || ch == 'Y')
      total += 4;
    else if (ch == 'K')
      total += 5;
    else if (ch == 'J' || ch == 'X')
      total += 8;
    else if (ch == 'Q' || ch == 'Z')
      total += 10;
  }

  printf("Scrabble value: %d\n", total);

  return 0;

}
