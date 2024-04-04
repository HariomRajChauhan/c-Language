#include <stdio.h>

int main()
{

    int n, arr[100], i, j, temp;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    // Input the array
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Bubble sort

    for (i = 0; i < n - 1; i++)
    {
        // for ( j=0; j<n-1-i; j++){
        for (j = i + 1; j < n; j++)
        {
            // if (arr[j] < arr[j + 1])
            if (arr[i] < arr[j])
            {
                // temp = arr[j];
                // arr[j] = arr[j+1];
                // arr[j+1] = temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("The sorted array is: ");

    // Output the sorted array
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}