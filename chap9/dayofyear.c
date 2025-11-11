#include <stdio.h>

int day_of_year(int month, int day, int year);

int main(void) {
    int m, d, y;

    printf("Enter date (mm dd yyyy): ");
    scanf("%d %d %d", &m, &d, &y);

    printf("Day of year: %d\n", day_of_year(m, d, y));

    return 0;

}

int day_of_year(int month, int day, int year) {
    int sum = 0;
    
    int days_per_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    sum += day;

    for (int i = 0; i < month - 1; i++) {
        if (i == 1) {
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
                sum += 29;
                continue;
            }
            else {
                sum += days_per_month[i];
                continue;
            }
        }
        sum += days_per_month[i];
    }
    return sum;
}


