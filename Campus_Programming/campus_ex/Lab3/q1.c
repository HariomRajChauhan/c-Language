#include<stdio.h>

int main(){
    int n;
    printf("Enter A number :");
    scanf("%d",&n);

    if (n>0)
    {
        /* code */
        printf("%d is a Positive Number\n",n);

    }
    
    else if (n<0)
    {
        /* code */
        printf("%d is a Negative Number\n",n);
    }
    

    else
    {
        printf("%d is Zero\n",n);
    }



    return 0;
}