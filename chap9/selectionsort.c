#include <stdio.h>
#define LEN 5

void selection_sort(int array[], int len);

int main(void) {
    int array[LEN];
    int n;

    printf("Enter %d integers (Ctrl+D to stop): ", LEN);

    int i = 0;
    while(scanf("%d", &n) == 1) {
        array[i] = n;
        i++;
    }
    
    printf("\n");
    selection_sort(array, LEN);

    printf("The numbers sorted are: ");
    for (int i = 0; i < LEN; i++)
        printf("%d ", array[i]);

    printf("\n");

    return 0;

}

void selection_sort(int array[], int len) 
{
    if (len <= 1)
        return;

    int largest_index = 0;

    for (int i = 1; i < len; i++) {
        if (array[largest_index] < array[i])
            largest_index = i;
    }

    int temp = array[len - 1];
    array[len - 1] = array[largest_index];
    array[largest_index] = temp;

    selection_sort(array, len - 1);
}
    

/* Original way I tried to solve the problem without recursion, it also has a bug that doesn't return the right order sometimes
 
int selection_sort(int array[], int len) 
{   
    int temp[len];
    int large_index, placeholder; 
    int largest = array[0];
    for (int j = len - 1; j >= 0; j--) {
        for (int i = 0; i <= j; i++) {
            if (array[i] > largest) {
                largest = array[i];
                large_index = i;
            }
        }
        temp[j] = largest;
        placeholder = array[j];
        array[j] = largest;
        array[large_index] = placeholder;
        largest = array[j - 1];
    }

    for (int i = 0; i < len; i++) {
        printf("%d ", temp[i]);
    }

    return 0; 
}
*/


            


