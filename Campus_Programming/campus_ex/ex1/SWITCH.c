#include<stdio.h>

int main(){
    
    float a,b,ans;
    char op;

    printf("Enter The Value of A,B\n");
    scanf("%f %f",&a,&b);
    printf("Enter + for Addition\nEnter - for Subtraction\n Enter * for Multiplication\nEnter / for Division\n");

    printf("Enter one of then\n");
    scanf(" %c",&op);

    switch (op)
    {
    case '+':
        ans = a+b;
        printf("The sum is %f",ans);
        break;

    case '-':
        ans = a-b;
        printf("The Sub is %f",ans);
        break;

    case '*':
        ans = a*b;
        printf("The Multi is %f",ans);
        break;

    case '/':
        ans = a/b;
        printf("The Div is %f",ans);
        break;
    
    default:

        printf("Invalid Input");
        break;
    }





    return 0;
}