#include <stdio.h>

int main() {

  int day, month, year;

  printf("Enter your date (mm/dd/yyyy):\n");

  scanf("%d/%d/%d", &month, &day, &year);

  printf("You entered the date %4d%.2d%.2d\n", year, month, day);

  return 0;
};
