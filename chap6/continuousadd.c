#include <stdio.h>

int main(void) 
{
  printf("This program sums a series of integers.\n");

  int sum = 0;
  int i;

  printf("Enter integers (0 to terminate): ");

  while (i != 0) 
  { 
    scanf("%d", &i);
    sum += i;
    printf("%d has been added to sum.\n", i);

  }

  printf("The sum is: %d\n", sum);

  return 0;
}
