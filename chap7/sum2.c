#include <stdio.h>

int main(void) {
 
  printf("This program sums a series of doubles.\n");
  
  double i, sum = 0;
    
  printf("Enter doubles (0 to terminate): ");
  
  scanf("%lf", &i);
  while (i != 0) {
    sum += i;
    scanf("%lf", &i);
  }

  printf("Sum = %lf\n", sum);
 
  return 0;

}
