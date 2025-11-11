#include <stdio.h>

int main () {

  int gsi, identifier, publisher, item, check;

  printf("Enter your ISBN: ");

  scanf("%d-%d-%d-%d-%d", &gsi, &identifier, &publisher, &item, &check);

  printf("GSI prefix: %.3d\n", gsi);
  
  printf("Group Identifier: %.1d\n", identifier);

  printf("Publisher code: %.3d\n", publisher);

  printf("Item Number: %.5d\n", item);
  
  printf("Check digit: %.1d\n", check);

  return 0;

};
