#include<stdio.h>

int main(){
    int n,flag=0;
    printf("Enter a number");
    scanf("%d",&n);
    if (n<=0)
    {
        /* code */
        printf("The number is %d\n",n);
        
    }

    else if (n==1)
        {
            printf("The number is neither prime nor composite\n");
            
        }

    else if (n==2)
    {
        printf("Smallest and only one even prime\n");
    }

    else
    {
        for (int i = 2; i <=(n/2); i++)
        {
            /* code */
            if (n%i==0)
            {
                flag = 1;
                break;
            }
            
        }

        if (flag == 0)
        {
            /* code */
            printf("%d is prime number\n",n);
        }

        else{
            printf("%d is composite number\n",n);
            if (n%2 == 0)
            {
                /* code */
                printf("Even\n");
            }
            
            else{
                printf("Odd \n");
            }


        }
        
        
    }
    
    return 0;
}