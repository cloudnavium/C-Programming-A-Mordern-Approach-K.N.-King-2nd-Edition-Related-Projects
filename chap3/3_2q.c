#include <stdio.h>

int main () {

  int item_number, day, month, year;
  float unit_price;

  printf("Enter item number: ");
  scanf("%d", &item_number);

  printf("\nEnter unit price: ");
  scanf("%f", &unit_price);

  printf("\nEnter purchase date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("\nItem      Unit      Purchase\n");
  printf("          Price     Date\n");
  printf("%-6d    $%-6.2f   %.2d/%.2d/%d\n", item_number, unit_price, month, day, year);

  return 0;
};
