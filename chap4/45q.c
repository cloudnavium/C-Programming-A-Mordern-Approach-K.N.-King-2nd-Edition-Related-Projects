#include <stdio.h>

int main() {

/* Computes a Universal Product Code check digit */

  int one, two, three, four, five, six, seven, eight, nine, ten, eleven, first_sum, second_sum, check_digit; 
  
  
  printf("Enter the first 11 digits of a UPC: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &one, &two, &three, &four, &five, &six, &seven, &eight, &nine, &ten, &eleven);

  first_sum = one + three + five + seven + nine + eleven;

  second_sum = two + four + six + eight + ten;

  check_digit = 9 - ((((first_sum * 3) + second_sum) - 1) % 10);

  printf("Check digit: %d\n", check_digit);

  return 0;
};
