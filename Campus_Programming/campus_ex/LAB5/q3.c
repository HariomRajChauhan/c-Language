#include <stdio.h>

int main()
{
    int n1, n2,count=0 ;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    if (n1 < n2)
    {
        for (int i = n1 + 1; i < n2; i++)
        {
            if (i % 2 == 0)
            {
                printf("%d,", i);
                count++;
                
            }

        }
        printf("\nTotal even numbers between the two numbers: %d", count);
    }

    else if (n1 > n2)
    {
        for (int i = n1 -1; i > n2; i--)
        {
            if (i % 2 == 0)
            {
                printf("%d,", i);
                count++;
            }
        }
        printf("\nTotal even numbers between the two numbers: %d", count);
    }

    else
    {
        printf("No even numbers between the two numbers");
    }

    
    return 0;
}