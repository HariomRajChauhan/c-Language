#include<stdio.h>

struct Student
{
    /* data */
    char name[20];
    char rollno[15];
    char address[20];
    int age;
    float avg_marks;
};

void display(struct Student s[],int size)
{
    int i;
    for ( i = 0; i < size; i++)
    {
        /* code */
        printf("\n\nDetails of students %d\n",i+1);

        printf("Name : %s\n",s[i].name);
        printf("Roll No : %s\n",s[i].rollno);
        printf("Address : %s\n",s[i].address);
        printf("Age : %d\n",s[i].age);
        printf("Average Marks : %f\n",s[i].avg_marks);
    }
    
}


int main(){
    struct Student st[2];

    for (int i = 0; i < 2; i++)
    {
        /* code */
        printf("\nStudent %d\n",i+1);
        fflush(stdin);
        printf("Enter Name: ");
        gets(st[i].name);
        fflush(stdin);
        printf("Enter Rollno: ");
        gets(st[i].rollno);
        fflush(stdin);
        printf("Enter Address: ");
        gets(st[i].address);
        fflush(stdin);
        printf("Enter age: ");
        scanf("%d",&st[i].age);
        fflush(stdin);
        printf("Enter Average Marks: ");
        scanf("%f",&st[i].avg_marks);
    }
    display(st,2);
    return 0;
}