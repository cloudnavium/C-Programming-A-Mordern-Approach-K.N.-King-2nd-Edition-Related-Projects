#include <stdio.h>
#define LEN 10

float average(int len, int arr[len]);
int max(int len, int arr[len]);
int positives(int len, int arr[len]);

int main(void) 
{
    int n = LEN;
    int a[LEN] = {30, -20, 10, -39, 40, -58, 90, -49, 100, -1};

    printf("The average of the array: %.2f\n", average(n, a));
    printf("The max of the array: %d\n", max(n, a));
    printf("The number of positive numbers in the array: %d\n", positives(n, a)); 

    return 0;
}

float average (int len, int arr[len])
{
    float average = 0;
    for (int i = 0; i < len; i++) 
    {
        average += arr[i];
    }
    average /= len;

    return average;
}

int max(int len, int arr[len])
{   
    int max = arr[0];
    for (int i = 0; i < len; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

int positives(int len, int arr[len])
{
    int count = 0;
    for (int i = 0; i < len; i++) {
        if (arr[i] > 0)
            count++;
    }

    return count;
}
