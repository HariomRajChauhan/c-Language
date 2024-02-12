#include<stdio.h>

int main(){
    char str1[] = "UNIVERSITY";

    int i,j,k=2;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < k; j++)
        {
            printf("%c " ,str1[j]);
        }
        k=k+2;
        printf("\n");
    }

    k = 8;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < k; j++)
        {
            printf("%c ",str1[j]);
        }
        k= k-2;
        printf("\n");
        
    }
    
    





    return 0;
}