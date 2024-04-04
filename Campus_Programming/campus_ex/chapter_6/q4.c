#include <stdio.h>

long int fibonacci(int n) {
    
    if (n<=1) {
        return n;
    }
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    if (n==0)
    {
        printf("0th term donot exits\n");
        return 0;
    }
    else
        printf("The %dth Fibonacci number is: %ld\n", n, fibonacci(n-1));
    

    return 0;



}