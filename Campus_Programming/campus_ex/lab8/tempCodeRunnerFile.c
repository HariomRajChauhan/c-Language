#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fptr;
    char ch;

    fptr = fopen("data.txt","w");
    if (fptr == NULL)
    {
        fprintf(stderr,"File data.txt can not be opened");
        exit(0);
    }
    
    fprintf(fptr,"This is my first file I/O Program");
    fclose(fptr);

    fptr = fopen("data.txt","r");
    if (fptr == NULL)
    {
        fprintf(stderr,"File data.txt cannot be opened");
        exit(0);
    }
    while (1)
    {
        ch = fgetc(fptr);
        if (ch == EOF)
        {
            break;
        }
        else
        {
            putchar(ch);
        }
        
    }
    fclose(fptr);
    
    return 0;
}