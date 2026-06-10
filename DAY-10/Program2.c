#include <stdio.h>

int main() {
    int i, j, rows = 5;

    for(i = rows; i >= 1; i--) {
        // Print spaces
        for(j = 0; j < rows - i; j++) {
            printf(" ");
        }

        // Print stars
        for(j = 0; j < (2 * i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}