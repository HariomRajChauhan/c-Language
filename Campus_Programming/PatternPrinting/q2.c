#include<stdio.h>

int main(){
    int i,j;

    for ( i = 1; i <= 7; i++)
    {
        for ( j = 1; j <=8-i ; j++)
        {
            int k=i+j;
            printf("\t* %d %d",i,j);
        }
        printf("\n\n");
    }


    
    return 0;
}
