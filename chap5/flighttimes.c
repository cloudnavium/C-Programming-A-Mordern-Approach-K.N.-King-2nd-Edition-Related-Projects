#include <stdio.h>
#include <stdlib.h>


#define HOURS1 8
#define HOURS2 9
#define HOURS3 11
#define HOURS4 12
#define HOURS5 14
#define HOURS6 15
#define HOURS7 19
#define HOURS8 21

#define MINUTES1 0
#define MINUTES2 43
#define MINUTES3 19
#define MINUTES4 47
#define MINUTES5 0
#define MINUTES6 45
#define MINUTES7 0
#define MINUTES8 45

int main(void) {

  int hours, minutes, total_mins, closest, closest_hour, closest_min, t1, t2, t3, t4, t5, t6, t7, t8, closest12, closest34, closest56, closest78, closest1234, closest5678;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hours, &minutes);

  total_mins = hours * 60 + minutes;

  t1 = HOURS1 * 60 + MINUTES1; 
  t2 = HOURS2 * 60 + MINUTES2;
  t3 = HOURS3 * 60 + MINUTES3;
  t4 = HOURS4 * 60 + MINUTES4;
  t5 = HOURS5 * 60 + MINUTES5;
  t6 = HOURS6 * 60 + MINUTES6;
  t7 = HOURS7 * 60 + MINUTES7;
  t8 = HOURS8 * 60 + MINUTES8;


  if ((abs(total_mins - t1)) < (abs(total_mins - t2))) {
    closest12 = t1;
  } else {
    closest12 = t2;
  }
  if (abs((total_mins - t3)) < abs((total_mins - t4))) {
    closest34 = t3;
  } else {
    closest34 = t4;
  }
  if (abs((total_mins - t5)) < abs((total_mins - t6))) {
    closest56 = t5;
  } else {
    closest56 = t6;
  }
  if (abs((total_mins - t7)) < abs((total_mins - t8))) {
    closest78 = t7;
  } else {
    closest78 = t8;
  }
  if (closest12 < closest34) {
    closest1234 = closest12;
  } else {
    closest1234 = closest34;
  }
  if (closest56 < closest78) {
    closest5678 = closest56;
  } else {
    closest5678 = closest78;
  }
  if (closest1234 < closest5678) {
    closest = closest1234;
  } else {
    closest = closest5678;
  }

  printf("%d", closest);

  closest_hour = (closest - (closest % 60)) / 60;
  closest_min = closest % 60;

  printf("Closest departure time is %2d:%02d\n", closest_hour, closest_min);

  return 0;

}
