#include<stdio.h>

int main(){
    int a=10;
    float b=12.54;
    char c[] = "I Love Nepal";

    printf("%-10d\n",a);
    printf("%-10.3f\n",b);
    printf("%10.6s\n",c);

    return 0;
}