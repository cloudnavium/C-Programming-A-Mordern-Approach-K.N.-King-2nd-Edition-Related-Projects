#include <stdio.h>

int main () 
{
  float loan, interest, monthly_payment;

  printf("Enter the amount of loan: \n");
  scanf("%f", &loan);
  printf("Enter the amount of interest: \n");
  scanf("%f", &interest);
  printf("Enter the amount of monthly payment: \n");
  scanf("%f", &monthly_payment);

  float monthly_interest = (interest / 100.00) / 12.00;

  loan *= (1 + monthly_interest); loan -= monthly_payment;
  printf("Balance remaining after first payment: $%.2f\n", loan);

  loan *= (1 + monthly_interest); loan -= monthly_payment;
  printf("Balance remaining after second payment: $%.2f\n", loan);

  loan *= (1 + monthly_interest); loan -= monthly_payment;
  printf("Balance remaining after third payment: $%.2f\n", loan);


}
