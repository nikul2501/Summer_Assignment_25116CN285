#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 5};
    int n = 5;  // Total numbers should be from 1 to 5
    int i, sum = 0;

    int expectedSum = n * (n + 1) / 2;

    for (i = 0; i < n - 1; i++) {
        sum += arr[i];
    }

    int missingNumber = expectedSum - sum;

    printf("Missing Number = %d\n", missingNumber);

    return 0;
}