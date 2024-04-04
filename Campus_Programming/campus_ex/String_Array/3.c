#include<stdio.h>

int main(){

    char str1[] = "bangna";
    int i,len=0,flag=0,begin, end = 0;

    for(i=0; str1[i]!='\0'; i++){
        len++;
    }

    end = len-1;



    for(begin = 0; begin < end/2; begin ++){
        if(str1[begin] == str1[end - begin]){
            flag = 1;
        } else {
            flag =0;
            break;
        }
    }

    if(flag){
        printf("Palindrome");
    } else {
        printf("Not palindrome");
    }



    
    return 0;
}