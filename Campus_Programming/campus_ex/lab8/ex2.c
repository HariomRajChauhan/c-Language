#include<stdio.h>

int *s,*d;

void calculate(int *a,int *b){
    *s = *a + *b;
    *d = *a - *b;
}

int main(){
    int a,b;


    printf("Enter the value of two number:\n");
    scanf("%d %d",&a,&b);

    calculate(&a,&b);

    printf("Sum of two number is: %d\n",*s);
    printf("Difference of two number is: %d\n",*d);

    


    return 0;
}