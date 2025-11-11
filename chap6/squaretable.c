#include <stdio.h>

int main(void) 
{
  int total;
  int counter = 0;

  printf("This program prints a table of squares\n");

  printf("Enter number of entries in the table: ");
  scanf("%d", &total);

  while (counter < total)
  {
    ++counter;
    printf("%d        %d\n", counter, counter * counter);
  }

  return 0;
}
