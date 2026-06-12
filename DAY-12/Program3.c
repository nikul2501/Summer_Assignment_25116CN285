#include <stdio.h>

int perfect(int num) {
    int i, sum = 0;

    for (i = 1; i < num; i++) {
        if (num % i == 0)
            sum += i;
    }

    return (sum == num);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (perfect(num))
        printf("Perfect Number\n");
    else
        printf("Not a Perfect Number\n");

    return 0;
}