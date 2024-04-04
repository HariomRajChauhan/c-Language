#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int n, arr[100],i,count,j;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        count = 1;
        if (arr[i] != -1)
        {
            for (j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    arr[j] = -1;
                }
            }
            printf("%d occurs %d times\n", arr[i], count);
        }
    }

    getch();

    return 0;
}