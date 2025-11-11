#include <stdio.h>

int main(void) {

  int one = 5;
  int two = 7;
  int three = 9;
  int four = 11;

  int largest = 0;
  int smallest = 100;
  int temp_largest = 0;
  int temp_smallest = 100;

  if (one > two) {
    largest = one;
    smallest = two;
  }
  else {
    largest = two;
    smallest = one;
  }

  if (three > four) {
    temp_largest = three;
    temp_smallest = four;
  }

  else
    temp_largest = four;
    temp_smallest = three;

  if (largest < temp_largest)
    largest = temp_largest;

  if (smallest > temp_smallest) 
    smallest = temp_smallest;

  printf("%d\n", largest);
  printf("%d\n", smallest);

  return 0;
}
