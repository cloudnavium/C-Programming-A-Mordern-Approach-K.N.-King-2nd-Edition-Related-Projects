#include <stdio.h>

int main () 
{
  float user_num, answer, x;

  printf("Please enter a number: ");
  scanf("%f", &user_num);

  x = user_num;

  answer = ((3 * (x * x * x * x * x)) + (2 * (x * x * x * x)) - (5 * (x * x * x)) - (x * x) + (7 * x) - 6);

  printf("%.2f\n", answer);

  return 0;

 }
