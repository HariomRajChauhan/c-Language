#include <stdio.h>

int main() {
    int num1, num2, i, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate HCF
    for (i = 1; i <= num1 && i <= num2; ++i) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }

    // Calculate LCM
    lcm = (num1 * num2) / gcd;

    printf("HCF: %d\n", gcd);
    printf("LCM: %d\n", lcm);

    return 0;
}