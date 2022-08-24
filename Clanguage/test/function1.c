#include<stdio.h>

void display();

int main(){
    int b;
    printf("Welcome to the New program");
    scanf("%d",&b);

    if (b==1)
    {
        display();
    }
    else
    {
        printf("Wrong Input !");
    }
    
    return 0;
}

void display(){
    int a;
    printf("Hai I am display\n");
    scanf("%d",&a);
    printf("You had entered the %d",a);
}