#include <stdio.h>

int main(void) {

  float loan, rate, payment, monthly_rate;
  int num_payments;

  printf("Enter amount of loan: ");
  scanf("%f", &loan);

  printf("Enter interest rate: ");
  scanf("%f", &rate);
  
  printf("Enter monthly payment: ");
  scanf("%f", &payment);

  printf("Enter number of payments: ");
  scanf("%d", &num_payments);

  monthly_rate = (rate * .01) / 12;

  for (int i = 1; i <= num_payments; i++) {
    loan = loan + (loan * monthly_rate) - payment;
    printf("Balance remaining after %d payment: $%.2f\n", i, loan);
  }

  
  return 0;

}
