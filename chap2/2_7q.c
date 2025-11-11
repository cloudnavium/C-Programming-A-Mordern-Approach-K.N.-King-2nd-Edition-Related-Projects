#include <stdio.h>

int main () 
{
  float user_num, remainder;
  int num_20, num_10, num_5, num_1;

  printf("Enter a dollar amount: $");
  scanf("%f", &user_num);

  remainder = user_num;

  num_20 = remainder / 20;
  remainder = remainder - (num_20 * 20);

  num_10 = remainder / 10;
  remainder = remainder - (num_10 * 10);

  num_5 = remainder / 5;
  remainder = remainder - (num_5 * 5);

  num_1 = remainder / 1;

  printf("$20 bills: %d\n", num_20);
  printf("$10 bills: %d\n", num_10);
  printf("$5 bills: %d\n", num_5);
  printf("$1 bills: %d\n", num_1);

  return 0;
 }
