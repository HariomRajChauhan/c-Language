#include<stdio.h>

int a = 5;

int static_variable(){
    static int b = 10;
    b++;
    return b;
}

int global_variable(){
    a++;
    return a;
}

int main(){
    printf("Global_variable %d Static_Variable %d \n", global_variable(), static_variable());
    printf("Global_variable %d Static_Variable %d \n", global_variable(), static_variable());
    printf("Global_variable %d Static_Variable %d \n", global_variable(), static_variable());
    printf("Global_variable %d Static_Variable %d \n", global_variable(), static_variable());
    return 0;
}