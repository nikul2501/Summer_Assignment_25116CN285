#include <stdio.h>

int main() {
    int arr[] = {1, 4, 5, 7, 8, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 9;
    int found = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                printf("Pair found: %d and %d\n", arr[i], arr[j]);
                found = 1;
                break;
            }
        }
        if (found)
            break;
    }

    if (!found) {
        printf("No pair found with given sum.\n");
    }

    return 0;
}