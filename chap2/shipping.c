#include <stdio.h>

int main() {
  int roundedweight, height, width, length, volume, weight;
  
  height = 12;
  width = 10;
  length = 8;

  volume = height * width * length;

  weight = volume / 166;
  
  roundedweight = (volume + 165) / 166;

  printf("The volume of your box is %d.\nThe weight of your box is %d.\n Your weight rounded is %d.\n",volume, weight, roundedweight);

  return 0;

}
  


