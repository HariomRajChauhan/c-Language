#include<stdio.h>

int printFibonacci(int Number1)
{
    if(Number1==0 || Number1==1)
        return Number1;
    else
        return printFibonacci(Number1-1)+printFibonacci(Number1-2);
    
}





int main(){
    
    // Without using Recursion  -- Using Loops

    int n1,n2,n3,i,DescisionCheck;
    
    

    printf("\tFibonacci Series\n\tUsing Recursion -- 1\n\t Withour Recursion -- 0\n");
    scanf("%d",&DescisionCheck);

    
    
    
    if (DescisionCheck == 0)
    {
        n1 = 0;
        n2 = 1;
        int Number;
        printf("How many Fibonacci Numbers wants to print : ");
        scanf("%d",&Number);
        printf("\nThe fibonacci of %d is : %d, %d",Number,n1,n2);

        for (i = 2; i < Number; ++i)
        {
        n3 = n1 +n2;
        printf(", %d",n3);
        n1=n2;
        n2 = n3;
        }
        
    }

    else if (DescisionCheck == 1)
    {
        int num1=0,num2=1;
        int Number1;
        printf("How many Fibonacci Numbers wants to print : ");
        scanf("%d",&Number1);
        for(int i=0;i<=Number1;i++)
            printf("%d\t",printFibonacci(i));
        
    }



    
    else
        printf("Invalid Input !");
        main();
    



    // Using Recursion Function





    return 0;
}