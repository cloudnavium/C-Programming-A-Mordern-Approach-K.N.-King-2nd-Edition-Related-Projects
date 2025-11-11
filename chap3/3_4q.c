#include <stdio.h>

int main () {

  int part_one, part_two, part_three;

  printf("Enter phone number [(xxx) xxx-xxxx]: ");
  scanf("(%d) %d-%d", &part_one, &part_two, &part_three);

  printf("You entered %.3d.%.3d.%.4d\n", part_one, part_two, part_three);

  return 0;
};
