#include <stdio.h>
int main()
{
    int i;
    for (i=0;i<=255;i++)
    {
        printf("ASCII value of character\t %c : %d \n", i, i);
        if (i%24==0)
        {
            printf ("press any key for next.....");
        }
    }
    return 0;
}