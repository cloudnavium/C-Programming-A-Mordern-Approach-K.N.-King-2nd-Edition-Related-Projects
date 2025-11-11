#include <stdio.h>

int main(void) 
{
  int a = 0, b = 0;

  for (; a < 3; a++) printf("a = %d\n", a);
  for (; b < 3; ++b) printf("b = %d\n", b);

  return 0;
}
