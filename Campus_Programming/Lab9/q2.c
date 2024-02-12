#include<stdio.h>
#include<math.h>
struct point
{
    /* data */
    float x,y;

};



int main(){
    struct point A;
    struct point B;

    printf("Enter x-cordinate of point A :");
    scanf("%f",&A.x);
    printf("Enter y-cordinate of point A :");
    scanf("%f",&A.y);

    printf("Enter x-cordinate of point B :");
    scanf("%f",&B.x);
    printf("Enter y-cordinate of point B :");
    scanf("%f",&B.y);

    float distance;
    distance = pow(pow((B.x-A.x),2) + pow((B.y-A.y),2),0.5);

    printf("The distance Of these Point A and B is : %f",distance);

    return 0;
}