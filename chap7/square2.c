#include <stdio.h>

int main(void) {

  // This program works but it relies on overflow for the integer variables to determine the max possible square for each int type.

  printf("\nThis program prints the max square value for each integer type.\n\n");
 
  short s = 0; 
  int i = 1;

  do {
    i++;
    s = (short) (i * i);
  } while (s >= 0);
  
  // Subtract i because the last in range value is one less
  i = i - 1; 
  int max_square = i * i;

  printf("Short\nMax Square: %d\nMax Square Value: %d\n", i, max_square);
  
  int n = 0; 
  i = 1;

  do {
    i++;
    n = (i * i);
  } while (n >= 0);
  
  // Subtract i because the last in range value is one less
  i = i - 1; 
  max_square = i * i;

  printf("\nInteger\nMax Square: %d\nMax Square Value: %d\n", i, max_square);

  long m = 0; 
  long a = 1;

  do {
    a++;
    m = (a * a);
  } while (m >= 0);
  
  // Subtract a because the last in range value is one less
  a = a - 1; 
  long long_square = (a * a);

  printf("\nLong\nMax Square: %ld\nMax Square Value: %ld\n", a, long_square);

  return 0;

}
