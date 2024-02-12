#include<stdio.h>


# Function which accepts structure as arguments and returns structure to the calling program




struct Complex
{
    /* data */
    float real,img;
};

struct Complex add_complex(struct Complex A,struct Complex B)
{
    struct Complex C;
    C.real = A.real + B.real;
    C.img = A.img + B.img;
    return C;

}

int main(){
    struct Complex M,N,Result;
    M.real = 4.0;
    M.img = 5.2;
    N.real = 4.9;
    N.img = 6.0;
    Result = add_complex(M,N);
    printf("\nThe result is %.2f + %.2f i \n",Result.real,Result.img);
    return 0;
}