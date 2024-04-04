#include<stdio.h>

int main(){
    char str1[] = "aabbaa";
    int flag, begin, end;
    int i;
    while(str1[i]!='\0'){
        i++;
    }
    end = i-1;
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