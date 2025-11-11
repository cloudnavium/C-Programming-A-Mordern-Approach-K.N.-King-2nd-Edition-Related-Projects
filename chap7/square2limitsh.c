#include <stdio.h>
#include <limits.h>

int main(void) {

  short s = 1;
  while ((s + 1) * (s + 1) < SHRT_MAX)
    s++;

  printf("\nShort\nMax Square = %hd\nMax Square Value = %d\n", s, s * s);

  int i = 1;
  while ((long) (i + 1) * (i + 1) < INT_MAX)
    i++;

  printf("\nInteger\nMax Square = %d\nMax Square Value = %d\n", i, i * i);

  long m = 1;
  while (m + 1 <= LONG_MAX / (m + 1))
    m++;

  printf("\nLong\nMax Square = %ld\nMax Square Value = %ld\n", m, m * m);

  
  return 0;
}
