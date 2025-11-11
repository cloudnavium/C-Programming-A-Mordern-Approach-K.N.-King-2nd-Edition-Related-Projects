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
void pop(void);
void stack_underflow(void);
void stack_overflow(void);

int main(void) {

    char c;

    printf("Enter parentheses and/or braces: ");

    while((c = getchar()) != '\n') {
        
        if((c == '}' || c == ')') && is_empty()) {
            printf("Parentheses/braces are not nested properly.\n");
            return 0;
        }
            

        if(c == '{' || c == '(') {
            push(c);
        } else if (c == '}' && contents[top - 1] == '{') {
            pop();
        } else if (c == ')' && contents[top - 1] == '(') {
            pop();
        }
    }

    if(is_empty())
        printf("Parentheses/braces are nested properly.\n");
    else
        printf("Parentheses/braces are not nested properly.\n");

    return 0;
}

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
    else
        contents[top++] = c;
}

void pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        contents[--top];
}


void stack_underflow(void)
{
    printf("Parentheses/braces are not nested properly.");
    exit(EXIT_SUCCESS);
}

void stack_overflow(void)
{
    printf("Stack overflow, exiting program...");
    exit(EXIT_SUCCESS);
}



        

