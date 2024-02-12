#include<stdio.h>

float power(float m,int n)
{
    
    if (n == 0)
    {
        return 1.0;
    }

    else if(n == 1)
    {
        return m;
    }
    else{
        return m*power(m,n-1);}
}

int main()
{

//recursion

    int n;
    float m,Result;


    printf("Enter the base : ");
    scanf("%f",&m);

    printf("Enter the Power : ");
    scanf("%d",&n);
    
    Result = power(m,n);


    printf("\nThe power of base %.3f^%d = %.3f\n\n",m,n,Result);

    return 0;
}
