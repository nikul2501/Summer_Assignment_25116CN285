#include <stdio.h>

int main() {
    int a[10][10], n, i, j;
    int diagonalSum = 0;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    printf("Enter the matrix elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        diagonalSum += a[i][i];
    }

    printf("Sum of diagonal elements = %d\n", diagonalSum);

    return 0;
}