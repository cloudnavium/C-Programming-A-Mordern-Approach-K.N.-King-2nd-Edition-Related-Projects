#include <stdio.h>

int main() {

  int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, check_digit, first_sum, second_sum;

  printf("Enter the first 12 digits of an EAN: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);

  first_sum = n2 + n4 + n6 + n8 + n10 + n12;

  second_sum = n1 + n3 + n5 + n7 + n9 + n11;

  check_digit = 9 - (((second_sum + (first_sum * 3)) - 1) % 10);

  printf("Check digit: %d\n", check_digit);

  return 0;
};
