#include <stdio.h>

int main(void) {

  int a, b, r = 1;

  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);

  for (int i; a < b;) {
    i = a;
    a = b;
    b = i;
  }
    
  printf("remainder = %d, a = %d, b = %d\n", r, a, b);

  while (r != 0) {

    r = a % b;
    a = b;
    b = r;

    printf("remainder = %d, a = %d, b = %d\n", r, a, b);
  }
  printf("The greatest common divisor is %d\n", a);

    return 0;
}
