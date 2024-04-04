#include<stdio.h>
// int flag=0;

void isprime(int n,int *flag){
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            *flag=1;
            break;
        }
    }
}

int main(){
    int n, flag=0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    isprime(n,&flag);

    if(flag==0){
        printf("%d is a prime number\n",n);
    }
    else{
        printf("%d is not a prime number\n",n);
    }

    return 0;
}