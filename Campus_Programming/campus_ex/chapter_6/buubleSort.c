#include<stdio.h>

void input(int a[],int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
}

void bubble_short(int a[],int n)
{
    int i,j,temp;
    for ( i = 0; i < n-1; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }  
        } 
    } 
}

void display(int a[],int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("%d ,",a[i]);
    }
    
}

int main(){
    int a[100],n;

    printf("Enter the value of n :");
    scanf("%d",&n);
    printf("Eneter %d elements ",n);
    input(a,n);
    printf("Before sorting the array is :");
    display(a,n);
    bubble_short(a,n);
    printf("\nAfter sorting the array is :");
    display(a,n);
    return 0;
}