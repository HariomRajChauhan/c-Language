#include<stdio.h>

int main(){
    int n,i=1;

    printf("Enter the number: ");
    scanf("%d",&n);
    printf("\n");

    for ( i; i <= 10; i++)
    {
        printf("%d X %d = %d\n", n,i,n*i);
    }
    
    return 0;
}