#include <stdio.h>

int main(void) 
{

  // My GFC algorithm
  int i1, i2, gfc;

  printf("Enter two integers: ");
  scanf("%d %d", &i1, &i2);
  
  for (int n = 1; n <= i1 && n <= i2; n++)
    if (i1 % n == 0 && i2 % n == 0)
      gfc = n;

  printf("Greatest common divisor: %d\n", gfc);






  return 0;
}
