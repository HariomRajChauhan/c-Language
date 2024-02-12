#include<stdio.h>

int main(){
    int x,y,z;

    x=2;
    z=4;

    y = (++x) + (++x) + (++x) + (++x);
    printf("%d",y);


    return 0;
}