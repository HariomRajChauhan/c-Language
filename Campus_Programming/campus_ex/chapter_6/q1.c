#include<stdio.h>

void add(int n1,int n2)
    {
        printf("Sum = %d + %d = %d\n",n1,n2,n1+n2);
    }

void sub(int n1,int n2)
    {
        printf("Sub = %d - %d = %d\n",n1,n2,n1-n2);
    }

void mul(int n1,int n2)
    {
        printf("Mul = %d x %d = %d\n",n1,n2,n1*n2);
    }

void div(int n1,int n2)
    {
        printf("Div = %d / %d = %.3f\n",n1,n2,(float)n1/n2);
    }





int main(){

    int n1,n2;
    printf("Enter two numbers : ");
    scanf("%d %d",&n1,&n2);

    add(n1,n2);
    sub(n1,n2);
    mul(n1,n2);
    div(n1,n2);

    return 0;
}