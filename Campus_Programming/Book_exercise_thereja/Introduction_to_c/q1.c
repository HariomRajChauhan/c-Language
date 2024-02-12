// This is for inputing the value using scanf so you can just find it here

#include<stdio.h>

int main(){
    // int a,b;
    // printf("\n Enter two Four digit numbers : ");
    // scanf("%2d %4d",&a,&b);
    // printf("\n The two number are : %d and %d",a,b);

    int a,b,c,d,Greatest =0;

    printf("\tEnter Four digit a,b,c,d\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if (a>=b && a>=c && a>=d)
    {
        Greatest = a;
        printf("The Greatest Number is %d",Greatest);
    }
    else if (b>=a && b>=c && b>=d)
    {
        Greatest = b;
        printf("The Greatest Number is %d",Greatest);
    }
    
    else if (c>=a && c>=b && c>=d)
    {
        Greatest = c;
        printf("The Greatest Number is %d",Greatest);
    }

    else if (d>=a && d>=b && d>=c)
    {
        Greatest = d;
        printf("The Greatest Number is %d",Greatest);
    }

    else
    {
        printf("Overflow !");
    }

    

    return 0;
}