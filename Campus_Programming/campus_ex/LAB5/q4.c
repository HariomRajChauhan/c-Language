#include<stdio.h>
#include<math.h>

int fact(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main(){
    int n;
    float sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += pow(n,i)/fact(i);
    }

    printf("Sum of the series: %f\n", sum);

    return 0;
}