#include <stdio.h>

int main(void) {
    
    float average = 0;
    char c;

    printf("Enter a sentence: ");
    int i = 0, words = 0;
  
    do { 
        c = getchar();
        if (c != ' ' && c != '\n') 
            i++;
        else {
            words++;
            average += i;
            i = 0;
        }
    } while (c != '\n');
    
    average /= words;
    
    printf("Average word length: %.1f\n", average);

    return 0;

}


