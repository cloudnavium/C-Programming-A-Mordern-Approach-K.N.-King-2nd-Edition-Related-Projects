#include <stdio.h>

void create_magic_square (int n, int magic_square[n][n]);
void print_magic_square (int n, int magic_square[n][n]);

int main(void) {
    int size;

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of the magic square: ");
    if (scanf("%d", &size) != 1 || size < 1 || size > 99 || size % 2 == 0) {
        printf("Invalid size.\n");
        return 1;
    }

    int square[size][size];                 // VLA after size is known
    
    create_magic_square(size, square);
    print_magic_square(size, square);

    return 0;
}

void create_magic_square (int size, int square[size][size])
{
    // init to 0
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            square[i][j] = 0;

    int y = 0, x = size / 2;
    for (int k = 1; k <= size * size; k++) {
        square[y][x] = k;

        // tentative move: up one, right one (wrap)
        int ny = (y - 1 + size) % size;
        int nx = (x + 1) % size;

        if (square[ny][nx] == 0) {
            y = ny;             // move up-right
            x = nx;
        } else {
            y = (y + 1) % size; // cell occupied → move down one from previous
            // x unchanged
        }
    }
}

void print_magic_square (int size, int square[size][size]) 
{
    // print
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
            printf("%5d", square[i][j]);
        printf("\n");
    } 
}

