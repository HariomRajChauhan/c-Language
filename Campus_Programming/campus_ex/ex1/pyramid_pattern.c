// Wap to print  Q.1


/*

   *
  ***
 *****
*******

*/



#include<stdio.h>
int n=5;

int main(){
    for (int i = 1; i <= n; i++)
    {
        for (int space = 1; space<=n-i; space++)
        {
            printf(" "); 
        }

        for (int star = 1; star <= ((2*i)-1); star++)
        {
            /* code */
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}