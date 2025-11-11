#include <stdio.h>

#define FOUR_DIVIDED_THREE (4.0/3.0)
#define PI (3.14159)

int main () {
  float volume, radius;
  radius = 10;

  volume = ((FOUR_DIVIDED_THREE * PI) * (radius * radius * radius));

  printf("The volume of a sphere with a 10-meter radius is: %.2f\n", volume);

  return 0;
}
