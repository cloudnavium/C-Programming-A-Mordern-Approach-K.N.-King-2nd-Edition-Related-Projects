#include <stdio.h>

int main(void) {
    
    int numbers[5][5];
    int row_sum[5] = {0};
    int column_sum[5] = {0};

    int size = (int) sizeof (numbers[0]) / sizeof (numbers[0][0]);
    printf("%d\n", size);
    
    for (int i = 0; i < size; i++) {
        printf("Enter row %d: ", i + 1);
        for (int j = 0; j < size; j++) {
            scanf("%d", &numbers[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            row_sum[i] += numbers[i][j];
            column_sum[i] += numbers[j][i];
        }
    }

    printf("Row totals: ");
    for (int i = 0; i < size; i++)
        printf("%d ", row_sum[i]);
    printf("\n");

    printf("Column totals: ");
    for (int i = 0; i < size; i++)
        printf("%d ", column_sum[i]);
    printf("\n");


    return 0;

}
