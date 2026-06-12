#include <stdio.h>
#include <math.h>

int armstrong(int num) {
    int temp = num, rem, sum = 0, digits = 0;

    // Count digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;

    // Calculate sum of digits raised to power of digits
    while (temp > 0) {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    return (sum == num);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (armstrong(num))
        printf("Armstrong Number\n");
    else
        printf("Not an Armstrong Number\n");

    return 0;
}