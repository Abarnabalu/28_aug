#include <stdio.h>

int main() {
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    int ones = 0, zeros = 0;
    int index = 0;

    while (decimal > 0) {
        int digit = decimal % 2;
        if (digit == 1) {
            ones++;
        } else {
            zeros++;
        }
        decimal /= 2;
        index++;
    }

    printf("Number of 0's: %d\n", zeros);
    printf("Number of 1's: %d\n", ones);

    return 0;
}
