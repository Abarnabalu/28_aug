#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The first %d prime numbers are:\n", n);

    int count = 0;
    int num = 2;

    while (count < n) {
        int is_prime = 1;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime) {
            printf("%d ", num);
            count++;
        }

        num++;
    }

    printf("\n");
    return 0;
}

