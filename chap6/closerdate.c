#include <stdio.h>

int main(void) {

  int m, d, y, earliest_date = 1, date;

  do {
    printf("Enter a date: ");
    scanf("%d/%d/%d", &m, &d, &y);
    
    date = y * 10000 + m * 100 + d;
     
    if (date == 0)
     break;

    if (date < earliest_date || earliest_date == 1)
      earliest_date = date;

  }  while (date != 0);  

  d = earliest_date % 100;
  m = ((earliest_date / 100) % 100);
  y = earliest_date / 10000;

  printf("%02d/%02d/%02d is the earliest date\n", m, d, y);
  


  return 0;
}













/* The orginal way I did it (trash)
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

}*/


