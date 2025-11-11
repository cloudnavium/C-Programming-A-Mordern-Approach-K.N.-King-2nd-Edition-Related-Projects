#include <stdio.h>
#include <stdlib.h>

int main(void) 
{

  int n;

  printf("Enter an integer: ");
  scanf("%d", &n);

  int i; 

  for (i = 2; i < n; i++)
  {
    if (n % i == 0) 
      break;
  }
  if (i < n)
    printf("%d is divisible by %d\n", n, i);
  else
    printf("%d is prime\n", n);

  return 0;
}
