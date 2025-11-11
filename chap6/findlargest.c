#include <stdio.h>

int main(void) 
{
  float n = 1.0f, max = 0.0f;

  while(n > 0) 
  {
    printf("Enter a number: ");
    scanf("%f", &n);
    
    if (max < n)
      max = n;
  }

  printf("The largest number entered was: %.2f\n", max);
 
  return 0;

}
