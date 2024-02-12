#include<stdio.h>
#include<string.h>

int main(){
    char str1[100],str1_copy1[100],str1_copy2[100];
    printf("\nEnter a string : ");
    gets(str1);

    strcpy(str1_copy1,str1);
    printf("\nCopying using built-in string function : %s",str1_copy1);

    int i=0;
    while (str1[i]!='\0')
    {
        str1_copy2[i]=str1[i];
        i++;
    }

    printf("\nCopying without using built-in string function : %s\n",str1_copy2);
    
    return 0;
}



////////---------////////



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
//         }

//         else if (sentence[i]=='.')
//         {
//             modified_sent[j]=':';
//             j = j+1;
//         }
//           i++;
//     }
//     modified_sent[j]='\0';
//     printf("\nModified sentence is:\n %s \n\n\n", modified_sent);
// //  printf("The length of modified string is : %d \n\n", strlen(modified_sent));

// }