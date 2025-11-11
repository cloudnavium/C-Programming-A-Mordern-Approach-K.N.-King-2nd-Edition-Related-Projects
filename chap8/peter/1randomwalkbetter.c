#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3

int main(void) {
    
    char map[11][11];
    bool attempted[11][11] = {false};
    int size = sizeof (map[0]) / sizeof (map[0][0]);
    srand((unsigned) time(NULL));
    char c = 'A';
    int x = 1, y = 1, previous_x, previous_y;

    // Set Boundaries
    for (int i = 0; i < 11; i++) {
        attempted[0][i] = true;
        attempted[i][0] = true;
    }

    // Set map to all periods 
    for (int i = 1; i < size; i++) {
        for (int j = 1; j < size; j++) {
            map[i][j] = '.';
        }
    }

    // Set A to the top right
    map[y][x] = c;
    attempted[y][x] = true;
    c++;
    


    int direction = 0;
    while (c <= 'Z') {

        // Checkpoint 
        previous_x = x;
        previous_y = y;

        // Select Direction (Up Down Left Right)
        direction = rand() % 4; 
        if (direction == UP) {
            y--;
        }
        else if (direction == DOWN) {
            y++;
        }
        else if (direction == LEFT) {
            x--; 
        }
        else if (direction == RIGHT) {
            x++;
        }

        // Check x Bounds 
        if ((x < 0) || (x >= size)) {
            x = previous_x;
            continue;
        }

        // Check y Bounds
        if ((y < 0) || (y >= size)) {
            y = previous_y;
            continue;
        }

        // Check if Dead End 
        if (attempted[previous_y][previous_x+1] && attempted[previous_y][previous_x-1] && attempted[previous_y+1][previous_x] && attempted[previous_y-1][previous_x]) 
        {
            printf("You're cooked\n");
            break;
        }


                

        // Check if Spot if Available
        if (attempted[y][x]) {
            y = previous_y;
            x = previous_x;
            continue;
        }

        // Fill in the spot with the next letter
        map[x][y] = c++;
        attempted[y][x] = true;

    }
 
    for (int i = 1; i < size; i++) {
        for (int j = 1; j < size; j++) {
            printf("%c ", map[i][j]);
        }
        printf("\n");
    }

    return 0;

}

