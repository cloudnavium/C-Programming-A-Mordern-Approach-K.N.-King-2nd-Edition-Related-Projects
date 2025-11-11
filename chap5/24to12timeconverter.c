#include <stdio.h>

int main(void) {
  
  int preconverted_hours, converted_hours, minutes;

  printf("Enter a 24-hour time: "); 
  scanf("%d:%d", &preconverted_hours, &minutes);


  if (preconverted_hours == 0) {
    printf("Equivalent 12-hour time: 12:%02d AM\n", minutes); 
  } 
  else if (preconverted_hours == 12) {
    printf("Equivalent 12-hour time: 12:%02d PM\n", minutes); 
  } 
  else if (preconverted_hours > 12) {
    converted_hours = preconverted_hours - 12;
    printf("Equivalent 12-hour time: %2d:%02d PM\n", converted_hours, minutes); 
  } 
  else {
    printf("Equivalent 12-hour time: %d:%02d AM\n", preconverted_hours, minutes); 
  }
  return 0;

}
