#include<stdio.h>

int main(){
    char c;
    int ascii;
    printf("\nEnter a character :");
    scanf("%c",&c);

    // printf("Ascii Number is %d\n",c);

    ascii = c; 
    // printf("%d",ascii);

    if (((ascii>=65) && (ascii<=90)) )
    {
        printf("%c is an Alphabet with upper case\n",c);
    }

    else if ( ((ascii>=97) && (ascii<=122)))
    {
        printf("%c is an Alphabet with lower case\n",c);
    }
    
    else
    {
        printf("%c is not an Alphabet",c);
    }
    


    return 0;
}