#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100], str2[100];
    int choice;

    printf("Enter a string: ");
    scanf("%s", str1);

    do {
        printf("\n===== MENU-DRIVEN STRING OPERATIONS =====\n");
        printf("1. Find Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate String\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Convert to Uppercase\n");
        printf("7. Convert to Lowercase\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Length = %lu\n", strlen(str1));
                break;

            case 2:
                strcpy(str2, str1);
                printf("Copied String = %s\n", str2);
                break;

            case 3:
                printf("Enter another string: ");
                scanf("%s", str2);
                strcat(str1, str2);
                printf("Concatenated String = %s\n", str1);
                break;

            case 4:
                printf("Enter another string: ");
                scanf("%s", str2);
                if(strcmp(str1, str2) == 0)
                    printf("Both strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;

            case 5:
                strcpy(str2, str1);
                strrev(str2);
                printf("Reversed String = %s\n", str2);
                break;

            case 6:
                strcpy(str2, str1);
                for(int i = 0; str2[i] != '\0'; i++)
                    str2[i] = toupper(str2[i]);
                printf("Uppercase = %s\n", str2);
                break;

            case 7:
                strcpy(str2, str1);
                for(int i = 0; str2[i] != '\0'; i++)
                    str2[i] = tolower(str2[i]);
                printf("Lowercase = %s\n", str2);
                break;

            case 8:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 8);

    return 0;
}