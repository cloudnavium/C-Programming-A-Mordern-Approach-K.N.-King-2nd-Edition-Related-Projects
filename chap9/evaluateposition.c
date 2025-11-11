#include <ctype.h>

int evaluate_position(char board[8][8])
{
    int advantage;
    int white_sum = 0;
    int black_sum = 0;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (isupper(board[i][j])) {
                white_sum += value(board[i][j]);
            } else if(islower(board[i][j])) {
                black_sum += value(board[i][j]);
            }
        }
    }
    
    advantage = white_sum - black_sum;
    
    return advantage;
}
    



