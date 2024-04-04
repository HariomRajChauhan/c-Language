#include <stdio.h>

int main() {
    int n = 5; // number of rows

    for (int i = 0; i < n; i++) {
        // Print spaces before the numbers
        for (int j = 0; j < i; j++) {
            printf(" ");
        }

        // Print numbers in ascending order
        for (int j = 1; j <= n - i; j++) {
            printf("%d", j);
        }

        // Print numbers in descending order
        for (int j = n - i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}