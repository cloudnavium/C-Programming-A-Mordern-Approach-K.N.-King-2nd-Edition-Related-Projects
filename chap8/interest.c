#include <stdio.h>
#include <math.h>
#define INITIAL 100

int main(void) {

    int years, frequency = 12;
    float rate;
    float rates[5];
    float values[5];

    int len = (int) (sizeof (values) / sizeof (values[0]));

    printf("Enter interest rate: ");
    scanf("%f", &rate); 
    rate /= 100;

    printf("Enter number of years: ");
    scanf("%d", &years);
    
    printf("Years");
    
    for (int h = 0; h < 5; h++)
        printf("  %7.0f%%", rate * 100 + h);

    printf("\n");

    for (int j = 0; j < years; j++) { 
        printf("%-5d", j + 1);

        for (int i = 0; i < len; i++) {
           rates[i] = ((float) i / 100) + rate;
           values[i] = INITIAL * (pow((1 + rates[i] / frequency), (frequency * (j + 1))));
           printf("    %.2f", values[i]);
        }

        printf("\n");
    }

    return 0;

}


