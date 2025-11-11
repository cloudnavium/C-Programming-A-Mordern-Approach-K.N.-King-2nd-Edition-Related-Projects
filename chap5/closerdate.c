#include <stdio.h>

int main(void) {
 
  int d1, d2, m1, m2, y1, y2, t1, t2, path;

  printf("Enter first date (mm/dd/yy): ");
  scanf("%d/%d/%d", &m1, &d1, &y1);

  printf("Enter second date (mm/dd/yy): ");
  scanf("%d/%d/%d", &m2, &d2, &y2);


  if (y1 == y2) 
  {
   if (m1 == m2) 
   {
    if (d1 == d1) 
    {
     path = 1; 
   }} 
   else if (m1 < m2) 
   {
    path = 2;
   }
   else {
     path = 3;
   }
  }
  else if (y1 < y2) 
  {
    path = 2;
  }
  else 
  {
    path = 3;
  }

  switch (path) {
    case 1: 
      printf("%02d/%02d/%02d are the same %02d/%02d/%02d", m1, d1, y1, m2, d2, y2);
      break;

    case 2: 
      printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d", m1, d1, y1, m2, d2, y2);
      break;

    case 3: 
      printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d", m2, d2, y2, m1, d1, y1);
      break;
  }

  printf("\n");
  
  return 0;

}
