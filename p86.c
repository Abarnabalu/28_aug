#include <stdio.h>

int main() {
    int num, n;
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter the bit position to set, clear, and toggle: ");
    scanf("%d", &n);

    printf("Original number: %d\n", num);

    int numSet = num | (1 << n);
    printf("Number after setting %d'th bit: %d\n", n, numSet);

    int numCleared = num & ~(1 << n);
    printf("Number after clearing %d'th bit: %d\n", n, numCleared);

    int numToggled = num ^ (1 << n);
    printf("Number after toggling %d'th bit: %d\n", n, numToggled);

    return 0;
}
