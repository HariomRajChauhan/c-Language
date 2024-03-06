#include<stdio.h>

int main(){
    int i,n;
    printf("Enter N :\n");
    scanf("%d",&n);
    i=n;
    while (i>=1)
    {
        printf("%d\n",i);
        i--;
    }
    return 0;
}