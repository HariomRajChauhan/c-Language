#include<stdio.h>
#include<stdlib.h>
#define max 100

int main(){
    int a[max][max], b[max][max], c[max][max], i, j, k,m,n,p,q;

    printf("\nEnter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &p, &q);

    if(n != p){
        printf("The matrices cannot be multiplied\n");
        exit(0);
    }



    printf("\nFirst matrix:\n");
    for(i = 0; i < m; i++){
        printf("Enter the elements of the %d row:\n", i+1);
        for(j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n\nSecond matrix:\n");

    for(i = 0; i < p; i++){
        printf("Enter the elements of the %d row:\n", i+1);
        for(j = 0; j < q; j++){
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < m; i++){
        for(j = 0; j < q; j++){
            c[i][j] = 0;
            for(k = 0; k < p; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("The resultant matrix is: \n");
    for(i = 0; i < m; i++){
        for(j = 0; j < q; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }


    return 0;
}