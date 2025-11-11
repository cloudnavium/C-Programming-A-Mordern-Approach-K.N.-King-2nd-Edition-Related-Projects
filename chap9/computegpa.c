#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LEN 10

float compute_GPA(char grades[], int n);

int main(void) 
{
    int n = LEN;
    char grades[n];

    // Generates random grades for grades array
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        switch (rand() % 5) {
            case 0:
                grades[i] = 'A';
                break;
            case 1:
                grades[i] = 'B';
                break;
            case 2:
                grades[i] = 'C';
                break;
            case 3:
                grades[i] = 'D';
                break;
            case 4:
                grades[i] = 'F';
                break;
        }
    }
    
    printf("GPA: %.2f\n", compute_GPA(grades, n));

    return 0;

}

float compute_GPA(char grades[], int n)
{
    float gpa = 0;

    for (int i = 0; i < n; i++) {
        switch (grades[i]) {
            case 'A':
                gpa += 4;
                break;
            case 'B':
                gpa += 3;
                break;
            case 'C':
                gpa += 2;
                break;
            case 'D':
                gpa += 1;
                break;
            case 'F':
                gpa += 0;
                break;
        }
    }

    gpa /= n;

    return gpa;
}

