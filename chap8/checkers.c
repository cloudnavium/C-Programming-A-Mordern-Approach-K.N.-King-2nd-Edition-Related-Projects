#include <stdio.h>

int main(void) {

    char board[8][8];

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if ((i + j) % 2 == 0) {
                board[i][j] = 'B';
                printf("%2c", board[i][j]);
            } else {
                board[i][j] = 'R';
                printf("%2c", board[i][j]);   
            }
        }
        printf("\n");
    }

    return 0;
}


