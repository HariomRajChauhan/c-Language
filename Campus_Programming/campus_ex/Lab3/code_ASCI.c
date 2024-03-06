#include<stdio.h>


// formatted input output
//lab questions 

int main(){
    char str[50],str2[] = "NEPAL";
    scanf("%[A-Z]",&str);
    printf("%s\n",str);
    printf("%0.5s\n",str2);
    printf("%-5.3s\n",str2);
    printf("%0.3s\n",str2);

    return 0;
}




