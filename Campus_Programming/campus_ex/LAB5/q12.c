#include <stdio.h>

int calculateHCF(int num1, int num2) {
    int hcf;
    for (int i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }
    return hcf;
}



int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int hcf = calculateHCF(num1, num2);
    int lcm = (num1 * num2) / calculateHCF(num1, num2);

    printf("HCF: %d\n", hcf);
    printf("LCM: %d\n", lcm);

    return 0;
}