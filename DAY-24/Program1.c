#include <stdio.h>
#include <string.h>

int isRotation(char *s1, char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    // Lengths must be equal
    if (len1 != len2)
        return 0;

    // Concatenate s1 with itself
    char temp[200];
    strcpy(temp, s1);
    strcat(temp, s1);

    // Check if s2 is a substring of temp
    return strstr(temp, s2) != NULL;
}

int main() {
    char s1[100], s2[100];

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    if (isRotation(s1, s2))
        printf("Strings are rotations of each other.\n");
    else
        printf("Strings are not rotations of each other.\n");

    return 0;
}