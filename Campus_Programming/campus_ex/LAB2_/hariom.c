#include<stdio.h>

int main(){
    int i,n;
    printf("enter n");
    scanf("%d",&n);
    for ( i= 1;i<=n;i++)
    {
        for (int j = 0; j <= n; j++)
        {
            printf("i=%d\n",i);
        }
        printf("\n");
    }
    
    return 0;
}