#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char c);
char pop(void);
void stack_underflow(void);
void stack_overflow(void);

int main(void)
{
    char c;

    make_empty();

    printf("Enter parentheses and/or braces: ");

    while ((c = getchar()) != '\n' && c != EOF) {

        if (c == '(' || c == '{') {
            push(c);
        }
        else if (c == ')' || c == '}') {
            if (is_empty()) {
                printf("Parentheses/braces are not nested properly.\n");
                return 0;
            }

            char open = pop();

            if ((c == ')' && open != '(') ||
                (c == '}' && open != '{')) {
                printf("Parentheses/braces are not nested properly.\n");
                return 0;
            }
        }
        /* ignore any other characters */
    }

    if (is_empty())
        printf("Parentheses/braces are nested properly.\n");
    else
        printf("Parentheses/braces are not nested properly.\n");

    return 0;
}

/* stack functions */

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(char c)
{
    if (is_full())
        stack_overflow();
    contents[top++] = c;
}

char pop(void)
{
    if (is_empty())
        stack_underflow();
    return contents[--top];
}

void stack_underflow(void)
{
    printf("Parentheses/braces are not nested properly.\n");
    exit(EXIT_FAILURE);
}

void stack_overflow(void)
{
    printf("Stack overflow\n");
    exit(EXIT_FAILURE);
}

