#include<stdio.h>
#include<string.h>

int main(){
    char Sentence[100];
    printf("\nEnter the Sentence :\n");

    gets(Sentence);

    // printf("You Entered : %d \n",Sentence);
    int i;
    int w_count = 1;
    int c_count = 0;
    for(i=0; i<strlen(Sentence); i++)
    {
        if (Sentence[i]==' ' || Sentence[i]=='\t' || Sentence[i]=='\n')
        {
            w_count += 1;
        }
        else
            c_count += 1;
    }

    printf("\nWord Count : %d\nCharcter Count : %d\n",w_count,c_count);

    return 0;
}