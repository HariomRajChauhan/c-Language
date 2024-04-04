#include <stdio.h>

int main() {
    int array[10];
    int i;

    printf("Enter 10 integer elements:\n");

    // Inputting elements into the array
    for (i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }

    printf("Elements in the array are:\n\t");

    // Printing elements of the array
    for (i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}