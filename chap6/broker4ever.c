#include <stdio.h>

int main (void) {

  float trade_value, commission;

  do {
    printf("Enter the value of trade: ");
    scanf("%f", &trade_value);

    if (trade_value < 2500.00f) 
      commission = trade_value * .017f + 30.00f;
    else if (trade_value < 6250.00f) 
      commission = trade_value * .0066f + 56.00f;
    else if (trade_value < 20000.00f)
      commission = trade_value * .0034f + 76.00f;
    else if (trade_value < 50000.00f)
      commission = trade_value * .0022f + 100.00f;
    else if (trade_value < 500000.00f)
      commission = trade_value * .0011f + 155.00f;
    else 
      commission = trade_value * .0009f + 255.00f;

    printf("Commission: $%.2f\n", commission);
  } while (trade_value != 0) ;

  return 0;
}
