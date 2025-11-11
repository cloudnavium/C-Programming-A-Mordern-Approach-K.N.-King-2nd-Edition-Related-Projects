#include <stdio.h>

int main (void) {

  int user_num, digits;

  printf("Enter a number: ");
  scanf("%d", &user_num);

  if (user_num < 10 && user_num > -10) {
      digits = 1;
  } else if (user_num < 100 && user_num > -100) {
      digits = 2;
  } else if (user_num < 1000 && user_num > -1000) {
      digits = 3;
  } else {
      digits = 4;
  }

  printf("The number %d has %d digits\n", user_num, digits);

  return 0;
}
