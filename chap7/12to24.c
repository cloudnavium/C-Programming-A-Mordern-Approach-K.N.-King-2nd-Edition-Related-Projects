#include <stdio.h>
#include <ctype.h>

int main(void) {

    int h, m, h2;
    char p;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &h, &m, &p);
    
    if (tolower(p) == 'a')
        h2 = h % 12;
    else if(tolower(p) == 'p') 
        h2 = ((h == 12) ? 12 : (h + 12));

    printf("Equivalent 24-hour time: %02d:%02d\n", h2, m);

    return 0;
}


  
