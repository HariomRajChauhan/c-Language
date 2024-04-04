#include<stdio.h>


int main(){
    char str1[30];
    
    int len=0;
    printf("Enter a string: ");
    scanf("%s", str1);

    while (str1[len] != '\0')
    {
        len++;
    }
    
    printf("Length of the string is: %d", len);



    return 0;
}