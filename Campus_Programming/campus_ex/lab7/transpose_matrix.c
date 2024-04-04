#include<stdio.h>
#define max 100

int main(){
    
    int a[max][max], b[max][max], i, j, m, n;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);

    printf("\nEnter the elements of the matrix: ");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nMatrix before transpose: \n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            b[j][i] = a[i][j];
        }
    }

    printf("\nMatrix after transpose: \n");

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }


    

    return 0;
}