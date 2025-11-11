#include <stdio.h>

int main () {

  int digit;

  printf("Enter a number: ");

  scanf("%d", &digit);

  printf("The reversal is: ");

  do {
    printf("%d", digit % 10);
    digit /= 10;
  } while (digit > 0);

  printf("\n");


  return 0;
}
