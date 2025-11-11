#include <stdio.h>

int main(void) {

  int n;

  printf("Enter a number: ");
  scanf("%d", &n);

  float e = 1;
  
  for(; n > 0; n--) {
    float factorial = 1.0f;
    for(int i = n; i > 0; i--) {
      factorial *= i;   
    }

    e += 1.0/factorial;
  }
  
  printf("e = %f\n", e);
  
  

  return 0;
}
