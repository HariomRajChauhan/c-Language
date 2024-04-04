#include<stdio.h>

void Display(int n[])
{
    int i;
    for ( i = 0; i < 10; i++)
    {
        printf("%d\t",n[i]);
    }
    
}

void Store(int n[])
{
    int i;
    for ( i = 0; i < 10; i++)
    {
            scanf("%d ",&n[i]);
    }
    
}

int main(){
    
    int a[10];

    printf("Enter 10 Integer :\n");
    Store(a);
    printf("The Stored Number Are \n");
    Display(a);

    return 0;
}