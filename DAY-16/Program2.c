#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 4, 2, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxFreq = 0, maxElement = arr[0];

    for (int i = 0; i < n; i++) {
        int freq = 1;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                freq++;
            }
        }

        if (freq > maxFreq) {
            maxFreq = freq;
            maxElement = arr[i];
        }
    }

    printf("Maximum Frequency Element = %d\n", maxElement);
    printf("Frequency = %d\n", maxFreq);

    return 0;
}