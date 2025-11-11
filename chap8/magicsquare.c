#include <stdio.h>

int main(void) {

    int size;
    int square[size][size]; 

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of the magic square: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            square[i][j] = 0;
        }
    }

    int y = 0, x = size / 2;
    for (int i = 0; i < size * size; i++) {
        square[y][x] = i + 1;
        printf("Y = %d, X = %d\n", y, x);
        if (y - 1 < 0)
            y = size - 1;
        else
            y--;
        if (x == size - 1)
            x = 0;
        else
            x++;

        while (square[y][x] != 0) {
            if (x == 0)
                x = size - 1;
            else
                x--;
            if (y == size - 1)
                y = 0;
            else 
                y++;
            y++;
        }
    }  

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                printf("%5d", square[i][j]);
            }
            printf("\n");
        }

    return 0;

}
            
    
