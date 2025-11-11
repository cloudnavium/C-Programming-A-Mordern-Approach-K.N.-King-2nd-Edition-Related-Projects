#include <stdio.h>

int main () {

  int bench = 225;
  int coolness = 0;


  if ( bench > 135) printf("Not bad\n");

  if ( bench >= 225) {
    printf("Sir please save some weights for the rest of us\n");
    ++coolness;
  }

  printf("You have this many cool points: %d\n", coolness);


  return 0;
}
