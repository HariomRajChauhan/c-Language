#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c,Area,s;

    printf("Enter the sides of triangle A,B,C Respectively:\n");

    scanf("%f %f %f",&a,&b,&c);


    if (((a+b)>c) && ((a+c)>b) && ((c+b)>a))
    {
        printf("Triangle Formed !\n");
        s=((a+b+c)/2);

        Area = pow((s*(s-a)*(s-b)*(s-c)),0.5);

        printf("The SemiPerimeter Of triangle is %.2f\n",s);
        printf("The Area Of triangle is %.2f\n",Area);

    }

    else
    {
        printf("Triangle can not be formed !");
    }
    

    return 0;
}