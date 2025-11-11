#include <stdio.h>

int main (void) {

  float trade_value, commission, shares, share_price, rival_commission;

  printf("Number of shares: ");
  scanf("%f", &shares);
  printf("Price per share: ");
  scanf("%f", &share_price);

  trade_value = shares * share_price;

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

  if (shares < 2000)
    rival_commission = .03f * shares + 33.00f;
  else 
    rival_commission = .02f * shares + 33.00f;

  printf("Rival commission: $%.2f\n", rival_commission);


  return 0;
}
