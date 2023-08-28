#include <stdio.h>

int main() {
    int rows;
    char alpha='a';
    printf("Enter the number of rows for the right-angled star triangle: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c\t",alpha);
            alpha++;
        }
        printf("\n");
    }
    return 0;
}
