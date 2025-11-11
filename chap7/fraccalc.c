#include <stdio.h>

int main(void) {

  int n1, d1, n2, d2, final_num, final_den, operand;

  printf("Enter two fractions separated by an operand: "); 
  
  scanf("%d/%d", &n1, &d1);
  operand = getchar(); 
  scanf("%d/%d", &n2, &d2); 

  if (operand == '+') {
    final_num = (n1 * d2) + (n2 * d1);
    final_den = d1 * d2;
    printf("The sum is "); 
  }

  else if (operand == '-') {
    final_num = (n1 * d2) - (n2 * d1);
    final_den = d1 * d2;
    printf("The difference is ");
  }

  else if (operand == '*') {
    final_num = n1 * n2;
    final_den = d1 * d2;
    printf("The product is ");
  }

  else if (operand == '/') {
    final_num = n1 * d2;
    final_den = d1 * n2;
    printf("The quotient is "); 
  } 
 
  int gcf = 1;

  for (int i = 1; i <= final_num && i <= final_den; i++) {
    if (final_num % i == 0 && final_den % i == 0) {
      gcf = i;
    }
  }

  printf("%d/%d\n", final_num, final_den);
  printf("The greatest common factor is %d\n", gcf);
  
  if (gcf != 1) {
    int simp_num = final_num / gcf, simp_den = final_den / gcf;

    if (final_num % final_den == 0)
      printf("The fraction in the simplest form is %d\n", simp_num / simp_den);
    else
      printf("The fraction in the simplest form is %d/%d\n", simp_num, simp_den);
  }

  return 0;
}

