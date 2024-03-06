#include<stdio.h>


int main(){
    int i;
    struct Book
    {
        int pages;
        char name;
        float price;
    };

    struct Book b1,b2,b3;

    printf("Enter Names, prices and no. of pages :\n");

        fflush(stdin);
        scanf("%c %f %d",&b1.name,&b1.price,&b1.pages);
        fflush(stdin);
        scanf("%c %f %d",&b1.name,&b1.price,&b1.pages);
        fflush(stdin);
        scanf("%c %f %d",&b1.name,&b1.price,&b1.pages);
    
    printf("And this is what you entered\n");

    for ( i = 0; i <= 2; i++)
    {
        printf("\tName:%c Price:%f No.of Pages:%d",names,price,pages);
        printf("\n");
    }





    return 0;
}