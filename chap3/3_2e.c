#include <stdio.h>

int main () {
  int x = 4;
  float y = 234.3523;


  printf("|%-8.1e|\n", y);

  printf("|%10.6e|\n", y);

  printf("|%-8.3f|\n", y);

  printf("|%6.0f|\n", y);

  return 0;
};
