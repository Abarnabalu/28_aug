#include <stdio.h>

int main() {
    int rows,number=1;
    printf("Enter the number of rows for the right-angled star triangle: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d\t",number);
            number++;
        }
        printf("\n");
    }
    return 0;
}
