#include<stdio.h>


int main(){
    int i,j,n=6;
    char star = '*';
    
    
    i=1;
    while (i<=n)
    {
        j =1;
        while (j<=i)
        {
            printf("\t%c",star);
            j++;
        }
        printf("\n");
        i++;
    }

    int k=10;
    while (k>=6)
    {
        int l =6;
        while (l<=k)
        {
            printf("\t%c",star);
            l++;
        }
        printf("\n");
        k--;
    }
    
    
    return 0;
}