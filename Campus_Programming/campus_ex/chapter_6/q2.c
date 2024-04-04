#include<stdio.h>

int power(float x, int n){
    int result = 1;
    for(int i = 1; i <= n; i++){
        result *= x;
    }
    return result;
}

int factorial(int n){
    int result = 1;
    for(int i = 1; i <= n; i++){
        result *= i;
    }
    return result;
}

int main(){
    int n, x,i;
    float sum = 0;
    printf("Enter the value of X: ");
    scanf("%d", &x);
    printf("How many terms do you want to calculate: ");
    scanf("%d", &n);

    
    for(i = 1; i <= n; i++){
        sum += (float)power(x, i) / factorial(i);
    }
    printf("The sum of the series is: %f", sum);

    return 0;
}


// #include<stdio.h>

// int power(float x,float n){
//     return x*power(x,n-1);

// }

// int factorial(int n){
//     return n*factorial(n-1);
    
// }





// int main(){
//     int n,x,i;

//     printf("Enter the value of X : ");
//     scanf("%d", &x);
//     printf("How many term do you want to calculate : ");
//     scanf("%d", &n);

//     float sum=0;
//     for(i=1;i<=n;i++){
//         sum+=power(x,i)/factorial(i);
//     }
//     printf("The sum of the series is : %f", sum);




//     return 0;
// }


