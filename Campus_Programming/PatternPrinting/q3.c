#include<stdio.h>

int main(){
    
    for (int i = 10; i >= 1; i--)
    {
        for (int j = 1; j <=i; j++)
        {
            printf("\t");
        }

        for (int j = 10; j >=i; j--)
        {
            printf("*\t");
        }
        printf("\n");
    }
    


    return 0;
}