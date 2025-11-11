#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3

int main(void) {
    
    char map[10][10];
    bool attempted[4] = {false};
    int size = sizeof (map[0]) / sizeof (map[0][0]);
    srand((unsigned) time(NULL));
    char c = 'A';
    int direction = 0, x = 0, y = 0;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            map[i][j] = '.';
        }
    }

    map[y][x] = c;
    c++;
    
    while (c <= 'Z') {
        direction = rand() % 4;

        if (attempted[0] + attempted[1] + attempted[2] + attempted[3] == 4) {
            printf("The program ended because there are no other possible moves.\n");
            break;
        }

        switch (direction) {
            
            case UP: 
                if (y - 1 >= 0 && map[y - 1][x] == '.') {
                    y--;
                    map[y][x] = c;
                    c++; 
                    for (int i = 0; i < 4; i++) {
                        attempted[i] = false;
                    }
                } else
                    attempted[0] = true;
                break;
           
            case DOWN: 
                if (y + 1 <= 9 && map[y + 1][x] == '.') {
                    y++;
                    map[y][x] = c;
                    c++;
                    for (int i = 0; i < 4; i++) {
                        attempted[i] = false;
                    }
                } else
                    attempted[1] = true;
                break;
            
            case LEFT: 
                if (x - 1 >= 0 && map[y][x - 1] == '.') {
                    x--;
                    map[y][x] = c;
                    c++;
                    for (int i = 0; i < 4; i++) {
                        attempted[i] = false;
                    }
                } else
                    attempted[2] = true;
                break;
        
          case RIGHT: 
              if (x + 1 <= 9 && map[y][x + 1] == '.') {
                    x++;
                    map[y][x] = c;
                    c++;
                    for (int i = 0; i < 4; i++) {
                        attempted[i] = false;
                    }
                } else
                    attempted[3] = true;    
                break;
        }
    }
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%c ", map[i][j]);
        }
        printf("\n");
    }

    return 0;

}

