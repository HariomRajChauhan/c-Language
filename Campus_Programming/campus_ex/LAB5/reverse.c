#include<stdio.h>

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("The number in reverse order is: ");
    while(number > 0){
        int digit = number % 10;
        printf("%d", digit);
        number /= 10;
    }

    return 0;
}