#include <stdio.h>

void minmax(int arr[], int n, int *min, int *max)
{   
    int i;
    *min = arr[0];
    *max = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int arr[100],n,min, max,i;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Calculating the size of the array
    // int size = sizeof(arr) / sizeof(arr[1])


    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    minmax(arr, n, &min, &max);

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}