#include<stdio.h>

struct Company
    {
        char name[20];
        char address[30];
        char phone[15];
        int NoOfEmploye;
    };

int main(){
    struct Company c1;

    printf("Enter Company Name :");
    gets(c1.name);
    printf("Enter Company Address :");
    gets(c1.address);
    printf("Enter Company Phone :");
    gets(c1.phone);
    printf("Enter No Of Employe :");
    scanf("%d",&c1.NoOfEmploye);


    printf("\nCompany Name : %s\n",c1.name);
    printf("Company Address : %s\n",c1.address);
    printf("Company Phone : %s\n",c1.phone);
    printf("No of Employe : %d\n",c1.NoOfEmploye);

    return 0;
}