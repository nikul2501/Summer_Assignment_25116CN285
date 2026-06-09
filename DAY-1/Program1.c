#include <stdio.h>

int main() {
    int N;
    int sum;

    printf("Enter a number: ");
    scanf("%d", &N);

    sum = N * (N + 1) / 2;

    printf("Sum of first %d natural numbers = %d\n", N, sum);

    return 0;
}