#include<stdio.h>

void calculator(float *a,float *b){
    printf("Sum = %.3f + %.3f = %.3f\n",*a,*b,*a+*b);
    printf("Sub = %.3f - %.3f = %.3f\n",*a,*b,*a-*b);
    printf("Mul = %.3f x %.3f = %.3f\n",*a,*b,*a**b);
}

int main(){
    float a,b;

    printf("Enter two numbers : ");
    scanf("%f %f",&a,&b);

    calculator(&a,&b);


    return 0;
}