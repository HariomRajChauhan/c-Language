#include<stdio.h>

int main(){
    int Age;

    printf("Enter Your Age");
    scanf("%d",&Age);

    if (Age>=18)
    {
        printf("You can Drive");
    }

    else
    {
        printf("You are bellow 18,You cannot drive");
    }
    
    
    return 0;
}