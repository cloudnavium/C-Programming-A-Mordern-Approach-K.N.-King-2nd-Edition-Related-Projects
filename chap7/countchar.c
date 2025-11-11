#include <stdio.h>

int main(void) {

  int counter = 0;

  printf("Enter your message: ");


  while (getchar() != '\n')
    counter++;

  printf("You typed %d characters\n", counter);

  return 0;
}
