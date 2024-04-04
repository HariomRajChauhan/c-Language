#include<stdio.h>

int main(){
    int sum=0,i=0,n1,n=10;
    float avg;

    for ( i; i < n; i++)
    {
        printf("Enter the number %d: ",i+1);
        scanf("%d",&n1);
        printf("\n");

        sum+=n1;

    }
    printf("The sum of the numbers is: %d",sum);

    avg = (float)sum/n;
    printf("\nThe average of the numbers is: %.2f",avg);
    
    return 0;
}