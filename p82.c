#include <stdio.h>
#include <math.h>

int main() {
    int numArmstrongs;
    printf("Enter the number of Armstrong numbers you want to find: ");
    scanf("%d", &numArmstrongs);

    int count = 0, num = 0;

    printf("%d Armstrong numbers:\n", numArmstrongs);

    while (count < numArmstrongs) {
        int originalNum = num;
        int sum = 0;
        int numDigits = 0;

        int temp = num;
        while (temp != 0) {
            temp /= 10;
            numDigits++;
        }

        temp = num;
        while (temp != 0) {
            int digit = temp % 10;
            sum += pow(digit, numDigits);
            temp /= 10;
        }

        if (sum == originalNum) {
            printf("%d\n", num);
            count++;
        }

        num++;
    }

    return 0;
}
