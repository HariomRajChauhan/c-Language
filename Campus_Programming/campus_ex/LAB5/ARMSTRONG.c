// #include<stdio.h>
// #include<math.h>

// int main(){
//     int n, sum = 0, temp, remainder, digits = 0;
//     printf("Enter a number: ");

//     scanf("%d", &n);
//     temp = n;
//     while (temp != 0)
//     {
//         digits++;
//         temp = temp / 10;
//     }
//     temp = n;
//     while (temp != 0)
//     {
//         remainder = temp % 10;
//         sum = sum + pow(remainder, digits);
//         temp = temp / 10;
//     }   
//     if (n == sum)
//     {
//         printf("%d is an Armstrong number\n", n);
//     }
//     else
//     {
//         printf("%d is not an Armstrong number\n", n);
//     }


//     return 0;
// }

#include<stdio.h>
#include<math.h>

int main(){
    int n,sum = 0,r,d;

    printf("Enter a number and its digits: ");
    scanf("%d %d", &n, &d);

    int temp = n;
    while (temp != 0)
    {
        r = temp % 10;
        sum = sum + pow(r, d);
        temp = temp / 10;
    }
    printf("%d\n", sum);

    if (n == sum)
    {
        printf("%d is an Armstrong number\n", n);
    }
    else
    {
        printf("%d is not an Armstrong number\n", n);
    }

    
    return 0;
}