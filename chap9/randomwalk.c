#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3

void generate_random_walk(char walk[10][10], int size);
void print_array(char walk[10][10], int size);

int main(void) {
    
    char walk[10][10];
    int size = sizeof (walk[0]) / sizeof (walk[0][0]);
    generate_random_walk(walk, size);
    print_array(walk, size);
        
    return 0;

}

void generate_random_walk(char walk[10][10], int size) 
{
    bool attempted[4] = {false};
    srand((unsigned) time(NULL));
    char c = 'A';
    int direction = 0, x = 0, y = 0;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            walk[i][j] = '.';
        }
    }

    walk[y][x] = c;
    c++;
    
    while (c <= 'Z') {
        direction = rand() % 4;

        if (attempted[0] + attempted[1] + attempted[2] + attempted[3] == 4) {
            printf("The program ended because there are no other possible moves.\n");
            break;
        }

        switch (direction) {
            
            case UP: 
                if (y - 1 >= 0 && walk[y - 1][x] == '.') {
                    y--;
                    walk[y][x] = c;
                    c++; 
                    for (int i = 0; i < 4; i++) {
                        attempted[i] = false;
                    }
                } else
                    attempted[0] = true;
                break;
           
            case DOWN: 
                if (y + 1 <= 9 && walk[y + 1][x] == '.') {
                    y++;
                    walk[y][x] = c;
                    c++;
                    for (int i = 0; i < 4; i++) {
                        attempted[i] = false;
                    }
                } else
                    attempted[1] = true;
                break;
            
            case LEFT: 
                if (x - 1 >= 0 && walk[y][x - 1] == '.') {
                    x--;
                    walk[y][x] = c;
                    c++;
                    for (int i = 0; i < 4; i++) {
                        attempted[i] = false;
                    }
                } else
                    attempted[2] = true;
                break;
        
          case RIGHT: 
              if (x + 1 <= 9 && walk[y][x + 1] == '.') {
                    x++;
                    walk[y][x] = c;
                    c++;
                    for (int i = 0; i < 4; i++) {
                        attempted[i] = false;
                    }
                } else
                    attempted[3] = true;    
                break;
        }
    }
}



void print_array(char walk[10][10], int size)
{
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%c ", walk[i][j]);
        }
        printf("\n");
    }
}


