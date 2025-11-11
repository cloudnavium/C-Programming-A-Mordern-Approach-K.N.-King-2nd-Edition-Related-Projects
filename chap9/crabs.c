#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>

int roll_dice(void);
bool play_game(void);

int main(void)
{
    int wins = 0, losses = 0;
    char ch;

    srand((unsigned) time(NULL));

    do {
        if (play_game())
            wins++;
        else
            losses++;

        printf("Play again? (y/n): ");
        scanf(" %c", &ch);
    } while (tolower((unsigned char) ch) == 'y');

    printf("Wins: %d  Losses: %d\n", wins, losses);

    return 0;
}

int roll_dice(void)
{
    int die1 = 1 + rand() % 6;
    int die2 = 1 + rand() % 6;
    int sum = die1 + die2;

    printf("You rolled: %d\n", sum);
    return sum;
}

bool play_game(void)
{
    int roll = roll_dice();
    int point;

    switch (roll) {
        case 7: case 11:
            printf("You win!\n");
            return true;
        case 2: case 3: case 12:
            printf("You lose!\n");
            return false;
        default:
            point = roll;
            printf("Your point is %d\n", point);
            break;
    }

    for (;;) {
        roll = roll_dice();
        if (roll == point) {
            printf("You win!\n");
            return true;
        } else if (roll == 7) {
            printf("You lose!\n");
            return false;
        }
        // else continue rolling
    }
}

