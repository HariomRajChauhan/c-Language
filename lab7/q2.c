#include<stdio.h>

int main(){
    int a[100] ,n,i,sum =0;
    float avg;
    printf("Enter the value of n :");
    scanf("%d",&n);

    printf("Enter %d element\n",n);

    for ( i = 0; i < n; i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
        sum+=a[i];

    avg = (float)sum/n;

    printf("Sum = %d\tAverage=%.2f", sum, avg);

    return 0;
}