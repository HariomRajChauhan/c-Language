#include<stdio.h>

int main(){
    char str[]="I love Nepal";
    printf("|%s|\n",str);
    printf("|%20s|\n",str);
    printf("|%-20s|\n",str);
    printf("|%-20.1s|\n",str);
    printf("|%-20.6s|\n",str);

    return 0;
}