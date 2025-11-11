#include <stdio.h>

int main(void) {

  int grade; 
  char letter;

  printf("Enter numerical grade: ");
  scanf("%d", &grade);

  if (grade <= 59)
    letter = 'F';
  else if (grade <= 69)
    letter = 'D';
  else if (grade <= 79)
    letter = 'C';
  else if (grade <= 89)
    letter = 'B';
  else 
    letter = 'A';

  printf("Letter grade: %c\n", letter);


  return 0;

}
