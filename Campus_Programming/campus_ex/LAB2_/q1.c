#include<stdio.h>

int main(){
    int a;float b;char c;

    a=5;
    b=5.65;
    c='@';


    printf("a=%d b=%f c=%c\n",a,b,c);
    printf("a=%d b=%d c=%d\n",sizeof(a),sizeof(b),sizeof(c));
    
    return 0;
}