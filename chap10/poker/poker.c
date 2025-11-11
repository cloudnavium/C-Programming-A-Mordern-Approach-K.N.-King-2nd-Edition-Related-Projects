#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX_CARDS 5
#define NUM_SUITS 4
#define NUM_RANKS 13
#define GAME_OVER false

#define STRAIGHT_FLUSH 0
#define FOUR_KIND 1
#define FULL_HOUSE 2
#define FLUSH 3
#define STRAIGHT 4
#define THREE_KIND 5
#define TWO_PAIRS 6
#define PAIR 7
#define HIGH 8

char hand[MAX_CARDS][2];
char suits[NUM_SUITS] = {'c', 'd', 'h', 's'};
char ranks[NUM_RANKS] = {'2', '3', '4', '5', '6', '7', '8', '9', 't', 'j', 'q', 'k', 'a'};

int analyze_hand(void);
void print_hand(void);
void print_results(int hand_value);
void read_hand(void);
void wipe_hand(void);

int main(void) 
{
    while(!GAME_OVER) {
        wipe_hand();
        read_hand();
        print_hand();
        print_results(analyze_hand());
        printf("\n");
    }

    return 0;
}

int analyze_hand(void) 
{
    /*
     * Analyzes external variable hand[][]
     * Returns an integer that represents a category in a switch statement in our print_results function 
    */

    int rank_counter[NUM_RANKS] = {0};
    int suit_counter[NUM_SUITS] = {0};

    for (int i = 0; i < MAX_CARDS; i++) {
        for (int j = 0; j < NUM_RANKS; j++) {
            if (hand[i][0] == ranks[j]) {
                rank_counter[j]++;
            }
        }
    }

    for (int i = 0; i < MAX_CARDS; i++) {
        for (int j = 0; j < NUM_SUITS; j++) {
            if (hand[i][1] == suits[j]) {
                suit_counter[j]++;
            }
        }
    }
    
    // Straight Flush
    for (int i = 0, flush = 0, straight = 0; i < NUM_RANKS; i++) {
        if (suit_counter[i] == 5) {
            flush++;
        }
        if (rank_counter[i] == 1) {
            if (rank_counter[i + 1] == rank_counter[i + 2] == rank_counter[i + 3] == rank_counter[i + 4])
                straight++;
        }
        if (flush && straight)
            return STRAIGHT_FLUSH;
    }   


    // Four of a Kind
    for (int i = 0; i < NUM_RANKS; i++) {
        if (rank_counter[i] == 4) {
            return FOUR_KIND;
        }
    }

    // Full house
    for (int i = 0, triple = 0, pair = 0; i < NUM_RANKS; i++) {
        if (rank_counter[i] == 3) {
            triple++;
        }
        if (rank_counter[i] == 2) {
            pair++;
        }
        if (triple && pair)
            return FULL_HOUSE;
    }

    // Flush
    for (int i = 0; i < NUM_RANKS; i++) {
        if (suit_counter[i] == 5) {
            return FLUSH;
        }
    }   

    // Straight
    for (int i = 0; i < NUM_RANKS; i++) {
        if (rank_counter[i] == 1) {
            if (rank_counter[i + 1] == rank_counter[i + 2] == rank_counter[i + 3] == rank_counter[i + 4])
                return STRAIGHT;
            else
                break;
        }
    }
    
    // Three of a Kind
    for (int i = 0; i < NUM_RANKS; i++) {
        if (rank_counter[i] == 3) {
            return THREE_KIND;
        }
    }

    // Two Pairs
    for (int i = 0, pair_counter = 0; i < NUM_RANKS; i++) {
        if (rank_counter[i] == 2) {
            pair_counter++;
            if (pair_counter == 2)
                return TWO_PAIRS;
        }
    }

    // Pair
    for (int i = 0; i < NUM_RANKS; i++) {
        if (rank_counter[i] == 2)
            return PAIR;
    }
   
    // High Card
    return HIGH;
 }

void print_hand(void) 
{
    printf(" __   __   __   __   __\n");
    for (int i = 0; i < MAX_CARDS; i++) {
        printf("|%c%c| ", hand[i][0], hand[i][1]);
    }

    printf("\n --   --   --   --   --");
    printf("\n");
}

void print_results(int hand_value)
{
    /*
     * Uses switch statement with hand_value as the case to determine what to print
    */
    switch (hand_value) {
        case STRAIGHT_FLUSH:
            printf("Straight flush.\n");
            break;
        case FOUR_KIND:
            printf("Four-of-a-kind.\n");
            break;
        case FULL_HOUSE:
            printf("Full house.\n");
            break;
        case FLUSH:
            printf("Flush.\n");
            break;
        case STRAIGHT:
            printf("Straight.\n");
            break;
        case THREE_KIND:
            printf("Three-of-a-kind.\n");
            break;
        case TWO_PAIRS:
            printf("Two pairs.\n");
            break;
        case PAIR:
            printf("Pair.\n");
            break;
        default:
            printf("High card.\n");
    }
}

void read_hand(void) 
{
    /*
     * Wipes hand 
     * Keeps prompting until 5 cards are in the hand[][], which is an external variable
     * Checks for duplicates and returns "Duplicate card; ignored", does not put the value in hand array
     * Checks for good inputs and returns "Bad card; ignored"
    */


    char rank, suit;
    bool duplicate, rank_valid, suit_valid;

    for (int i = 0; i < MAX_CARDS;) {
        duplicate = false; rank_valid = false, suit_valid = false;
        
        printf("Enter a card: ");
        scanf(" %c%c", &rank, &suit);

        suit = tolower(suit);
        
        // Validates input
        for (int k = 0; k < NUM_RANKS; k++) {
            if (rank == ranks[k]) {
                rank_valid = true;
            }
        }

        for (int k = 0; k < NUM_SUITS; k++) {
            if (suit == suits[k]) {
                suit_valid = true;
            }
        }

        // Checks if card is already in hand
        for (int j = 0; j < MAX_CARDS; j++) {
            if (hand[j][0] == rank && hand[j][1] == suit) {
                duplicate = true;
            }
        }

        if (!(rank_valid && suit_valid)) {
            printf("Bad card; ignored.\n");
            continue;
        } 
        else if (duplicate) {
            printf("Duplicate card; ignored.\n");
            continue;
        }
        
        // Cards added to hand
        hand[i][0] = rank;
        hand[i][1] = suit;
        i++;
    }
}

void wipe_hand(void) 
{
    for (int i = 0; i < MAX_CARDS; i++) {
        for (int j = 0; j < 2; j++)
            hand[i][j] = '0';
    }
}
