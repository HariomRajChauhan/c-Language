#include<stdio.h>

int main(){
    int n,count=0;
    
    printf("\n\tEnter a number");
    scanf("%d",&n);

    while (n!=0)
    {
        /* code */
        count++;
        n=n/10;

    }
    printf("\nNo of digits %d",count);
    

    return 0;
}