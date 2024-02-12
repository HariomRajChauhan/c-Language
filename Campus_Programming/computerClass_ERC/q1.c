// WAP to calculate area of circle [use pre processor directive for value of pi= 3.14]


#include<stdio.h>
#define pi 3.14
#include<math.h>

int main(){
    float radius,Area;

    printf("Enter a radius : ");
    scanf("%f",&radius);


    Area = pi * pow(radius,2);
    printf("\nThe area of circle whose radius %.3f is %.3f",radius,Area);

    return 0;
}