#include <stdio.h>
#include <math.h>
#define rad 3.145/180

int fact(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
  
}



int main() {
    
    double sum = 0 , n, x,x1,sign = -1;
    printf("Enter the value of n and x: ");
    scanf("%lf %lf", &n, &x);

    x1  = x;
    x = x * rad;

    for(int i = 0; i <= n; i+=2){
        sign *= -1;
        sum += sign * (pow(x,(double)i) / (double)fact(i));
    }

    printf("The value of cos(%lf) is %lf", x1, sum);

    return 0;
}