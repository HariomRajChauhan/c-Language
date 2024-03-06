#include<stdio.h>

int main(){
    int n,sum=0,rem,original;
    printf("Enter a number");

    scanf("%d",&n);
    original = n;

    while (n!=0)
    {
        /* code */
        rem = n%10;
        sum = sum +(rem*rem*rem);
        n = n/10;

    }
    if (sum == original)
    {
        /* code */
        printf("%d is armstrong",original);
    }

    else
        {
            printf("%d is not armstrong",original);
        }
    


    return 0;
}