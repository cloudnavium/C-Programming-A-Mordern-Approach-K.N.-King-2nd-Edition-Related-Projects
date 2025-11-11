#include <stdio.h>

int main() {

  int one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen, row_one_sum, row_two_sum, row_three_sum, row_four_sum, column_one_sum, column_two_sum, column_three_sum, column_four_sum, diagonal_one, diagonal_two;

  printf("Enter the numbers from 1 to 16 in any order:");

  scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &one, &two, &three, &four, &five, &six, &seven, &eight, &nine, &ten, &eleven, &twelve, &thirteen, &fourteen, &fifteen, &sixteen);

  row_one_sum = one + two + three + four;

  row_two_sum = five + six + seven + eight;

  row_three_sum = nine + ten + eleven + twelve;

  row_four_sum = thirteen + fourteen + fifteen + sixteen;

  column_one_sum = one + five + nine + thirteen;

  column_two_sum = two + six + ten + fourteen;

  column_three_sum = three + seven + eleven + fifteen;

  column_four_sum = four + eight + twelve + sixteen;

  diagonal_one = one + six + eleven + sixteen;

  diagonal_two = four + seven + ten + thirteen;

  printf("%d %d %d %d\n", one, two, three, four);
  printf("%d %d %d %d\n", five, six, seven, eight);
  printf("%d %d %d %d\n", nine, ten, eleven, twelve);
  printf("%d %d %d %d\n", thirteen, fourteen, fifteen, sixteen);

  printf("Row sums: %d %d %d %d\n", row_one_sum, row_two_sum, row_three_sum, row_four_sum);
  printf("Column sums: %d %d %d %d\n", column_one_sum, column_two_sum, column_three_sum, column_four_sum);
  printf("Diagonal sums: %d %d\n", diagonal_one, diagonal_two);

  return 0;
};
