#include<stdio.h>

int main(){
    int i,num ,flag =0;
    
    printf("enter the number : \n");
    scanf("%d",&num);

    for ( i = 2; i <= (num/2); i++)
    {
        if (num%i == 0)
        {
            flag = 1;
            break;
        }
        
    }
    
    if (flag == 0)
    {
        printf("%d is a Prime Number\n",num);

    }
    else
    {
        printf("%d is a Composite NUmber\n",num);
    }
    
    return 0;
}