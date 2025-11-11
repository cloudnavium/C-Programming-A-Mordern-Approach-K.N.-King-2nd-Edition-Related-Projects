#include <stdio.h>

int main(void) {
  
  int n, d, r;

  printf("Enter a fraction: ");
  scanf("%d/%d", &n, &d);

  int a = n;
  int b = d;

  while (r != 0) 
  {
    r = n % d;
    n = d;
    d = r;
  }


  printf("The GFD is: %d\n", n);
  printf("In lowest terms: %d/%d\n", (a / n), (b / n));
 
  return 0;
  
}
