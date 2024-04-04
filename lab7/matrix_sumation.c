// #include<stdio.h>

// int main(){
//     int a[100][100], i, j, m, n, sum = 0;

//     printf("Enter the number of rows and columns of the matrix: ");
//     scanf("%d %d", &m, &n);

//     printf("\nEnter the elements of the matrix: ");

//     for(i = 0; i < m; i++){
//         for(j = 0; j < n; j++){
//             scanf("%d", &a[i][j]);
//         }
//     }

//     for(i = 0; i < m; i++){
//         for(j = 0; j < n; j++){
//             sum += a[i][j];
//         }
//     }

//     printf("The sum of the elements of the matrix is: %d\n", sum);

    
//     return 0;
// }

#include<stdio.h>

int main(){
    int a[100][100], i, j, m, n, sum = 0;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);

    printf("\nEnter the elements of the matrix: ");

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            sum += a[i][j];
        }
        printf("Sum of row %d: %d\n", i+1, sum);
        sum = 0;
    }

    for(j = 0; j < n; j++){
        for(i = 0; i < m; i++){
            sum += a[i][j];
        }
        printf("Sum of column %d: %d\n", j+1, sum);
        sum = 0;
    }

    return 0;
}
