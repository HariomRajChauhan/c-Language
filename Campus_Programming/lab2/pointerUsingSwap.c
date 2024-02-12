#include<stdio.h>


//Function of swapping using pointer
void swap(int* a, int* b)
{
    int c;   // initiallization of an variable c
    c = *a;   //c takes the value of n1 by pointing
    *a = *b;
    *b =c;
}


int main(){
    int n1,n2;
    n1=9;
    n2= 4;

    printf("\nBefore swapping : %d %d\n",n1,n2);

    swap(&n1,&n2);  // ==> & --> gives the address of n1 and n2

    printf("After Swapping : %d %d",n1,n2);
    return 0;
}