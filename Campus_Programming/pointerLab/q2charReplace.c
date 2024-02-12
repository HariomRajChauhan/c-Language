#include<stdio.h>
#include<string.h>

int main(){
    char Sentence[100], ModifiedSentence[100];
    printf("\nEnter the Sentence :\n");

    gets(Sentence);

    // printf("You Entered : %d \n",Sentence);
    int i=0;
    int j=0;
    while(Sentence[i]! == '\0')
    {
        if (Sentence[i]!==' ' || Sentence[i]=='.')
        {
            ModifiedSentence[j] == Sentence[i];
            j =j+1;
        }
        else
            c_count += 1;
    }


//////

// #include<stdio.h>
// #include<string.h>

// void main()
// {

//     char sentence[100], modified_sent[100];
//     printf("\nEnter a sentence: ");
//     gets(sentence);

// //    printf("You entered: %s \n\n",sentence );
// //    printf("The length of entered string is : %d \n\n", strlen(sentence));
//     int i=0;
//     int j=0;
// //    for(i = 0; i<strlen(sentence); i++ )
//     while(sentence[i]!='\0')
//     {
//         if(sentence[i]!=' ' && sentence[i]!='.'){
//             modified_sent[j] = sentence[i];
//             j = j+1;





    printf("\nWord Count : %d\nCharcter Count : %d\n",w_count,c_count);

    return 0;
}