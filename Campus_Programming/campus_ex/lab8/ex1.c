#include<stdio.h>

int main(){
    int a,b,s,d,*A, *B;

    printf("Enter the value of two number:\n");
    scanf("%d %d",&a,&b);
    
    A = &a;
    B = &b;


    s = *A + *B;
    d = *A - *B;

    printf("The sum is %d \nThe Difference is %d\n",s,d);

    return 0;
}


// #include <stdio.h>

// void calculateSumAndDifference(int num1, int num2, int *sum, int *difference) {
//     *sum = num1 + num2;
//     *difference = num1 - num2;
// }

// int main() {
//     int num1, num2, sum, difference;

//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);

//     calculateSumAndDifference(num1, num2, &sum, &difference);

//     printf("Sum: %d\n", sum);
//     printf("Difference: %d\n", difference);

//     return 0;
// }

