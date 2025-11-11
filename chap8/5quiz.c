#include <stdio.h>

int main(void) {
    
    float scores[5][5];
    float row_sum[5] = {0};
    float column_sum[5] = {0};
    float max[5] = {0};
    float min[5] = {101, 101, 101, 101, 101};

    int size = (int) sizeof (scores[0]) / sizeof (scores[0][0]);
    
    for (int i = 0; i < size; i++) {
        printf("Enter quiz scores for student %d: ", i + 1);
        for (int j = 0; j < size; j++) {
            scanf("%f", &scores[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            row_sum[i] += scores[i][j];
            column_sum[i] += scores[j][i];
            if (scores[j][i] > max[i])
                max[i] = scores[j][i];
            if (scores[j][i] < min[i])
                min[i] = scores[j][i];

        }
    }

    printf("Total and average score for each student: \n");
    for (int i = 0; i < size; i++)
        printf("Student %d: Total: %.2f, Average: %.2f \n", i + 1, row_sum[i], row_sum[i] / size);
    
    printf("\n");

    printf("Highest, lowest, and average scores for each quiz: \n");
    for (int i = 0; i < size; i++)
        printf("Quiz %d: Highest: %.2f, Lowest: %.2f, Average: %.2f \n", i + 1, max[i], min[i], column_sum[i] / size);


    return 0;

}
