#include <stdio.h>

int main(void) {

  int i1, i2, i3, i4, max, min;

  printf("Enter four integers: ");

  scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

  if (i1 > i2) { 
    max = i1;
    min = i2;
  }
  else {
    max = i2;
    min = i1;
  }
  if (i3 > max) {
    max = i3;
  }
  if (i4 > max) {
    max = i4;
  }
  if (i3 < min) {
    min = i3;
  }
  if (i4 < min) {
    min = i4;
  }

  printf("Largest: %d\n", max);
  printf("Smallest: %d\n", min);

  return 0;

}
