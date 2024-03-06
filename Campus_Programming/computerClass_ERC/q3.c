#include<stdio.h>

int main(){
    for (int i = 1; i <= 7; i++)
    {
         for (int j = 1; j <= i; j++)
         {
            printf("(%d,%d)\t",i,j);
         }
         printf("\n\n");
    }
    
    return 0;
}