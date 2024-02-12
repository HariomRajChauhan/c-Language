// #include<stdio.h>

// int main(){
//     // for (int i = 0; i <= 100; i++)
//     // {
//     //     printf("The number is %d \t",i);
//     // }


//     char sen[100];
//     gets(sen);
//     printf(sen);
    
//     return 0;
// }



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ch;
    char s[10];
    char sen[100];
    
    
    scanf("%c",&ch);
    fflush(stdin);
    scanf("%s",s);
    fflush(stdin);
    // scanf("\n");
    gets(sen);
    
    printf("%c\n",ch);
    printf("%s\n",s);
    printf(sen);    
    return 0;
}