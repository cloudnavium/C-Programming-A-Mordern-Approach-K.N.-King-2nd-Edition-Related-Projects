#include <stdio.h>

int main(void) {

    float sum = 0, average; 
    float temperature_readings[30][24];
 
    int days, hours; 
    days = sizeof (temperature_readings) / sizeof (temperature_readings[0]);  
    hours = sizeof (temperature_readings[0]) / sizeof (temperature_readings[0][0]);  
    
    for (int i = 0; i < days; i++) {
        for (int j = 0; j < hours; j++) {
            sum += temperature_readings[i][j];
        }
    }

    average = sum / (days * hours);

    return 0;
} 
