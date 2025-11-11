#include <stdio.h>

int main() 
{
  float user_amount, total_with_tax;

  printf("Enter an amount: $ ");
  scanf("%f", &user_amount);

  total_with_tax = (user_amount + (user_amount * .05f));

  printf("With tax added: $%.2f\n", total_with_tax);
  return 0;
}
