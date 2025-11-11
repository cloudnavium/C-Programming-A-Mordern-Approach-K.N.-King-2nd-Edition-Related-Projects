#include <stdio.h>

int main(void) {
  
  int days, start;

  printf("Enter number of days in the month: ");
  scanf("%d", &days);

  printf("Enter starting day of the week (1=Sun, 7=Sat): ");
  scanf("%d", &start);

  int width = start * 4;



  for(int counter = 1, days_in_week = start; counter <= days; counter++, days_in_week++) {
    printf("%*d",width, counter);

    if (days_in_week >= 7) {
      printf("\n");
      days_in_week = 0; 
    }
    
    width = 4;
  }
  
  printf("\n");

  return 0;

}
