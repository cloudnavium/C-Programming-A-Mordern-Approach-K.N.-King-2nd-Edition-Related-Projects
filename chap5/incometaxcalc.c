#include <stdio.h>

#define BRACKET1_MAX 750.00f
#define BRACKET2_MAX 2250.00f
#define BRACKET3_MAX 3750.00f
#define BRACKET4_MAX 5250.00f
#define BRACKET5_MAX 7000.00f
#define BRACKET2_FEE 7.50f
#define BRACKET3_FEE 37.50f
#define BRACKET4_FEE 82.50f
#define BRACKET5_FEE 142.50f
#define BRACKET6_FEE 230.00f
#define BRACKET1_PERCENT .01f
#define BRACKET2_PERCENT .02f
#define BRACKET3_PERCENT .03f
#define BRACKET4_PERCENT .04f
#define BRACKET5_PERCENT .05f
#define BRACKET6_PERCENT .06f

int main(void) {
  
  float income, tax;

  printf("Enter your taxable income: ");
  scanf("%f", &income);

  if (income <= BRACKET1_MAX) {
    tax = income * BRACKET1_PERCENT;
  }
  else if (income <= BRACKET2_MAX) {
    tax = BRACKET2_FEE + ((income - BRACKET1_MAX) * BRACKET2_PERCENT);
  }
  else if (income <= BRACKET3_MAX) {
    tax = BRACKET3_FEE + ((income - BRACKET2_MAX) * BRACKET3_PERCENT);
  }
  else if (income <= BRACKET4_MAX) {
    tax = BRACKET4_FEE + ((income - BRACKET3_MAX) * BRACKET4_PERCENT);
  }
  else if (income <= BRACKET5_MAX) {
    tax = BRACKET5_FEE + ((income - BRACKET4_MAX) * BRACKET5_PERCENT);
  }
  else {
    tax = BRACKET6_FEE + ((income - BRACKET5_MAX) * BRACKET6_PERCENT);
  }

  printf("Taxes due: %.2f\n", tax);

  return 0;
}






