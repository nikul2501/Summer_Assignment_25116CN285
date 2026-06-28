#include <stdio.h>

struct Contact
{
    char name[50];
    char phone[15];
};

int main()
{
    struct Contact c[100];
    int n = 0, choice, i, found;
    char searchName[50];

    do
    {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter Name: ");
                scanf(" %[^\n]", c[n].name);

                printf("Enter Phone Number: ");
                scanf("%s", c[n].phone);

                n++;
                printf("Contact added successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("\nNo contacts found.\n");
                }
                else
                {
                    printf("\nContact List:\n");
                    printf("---------------------------------\n");
                    printf("Name\t\tPhone Number\n");
                    printf("---------------------------------\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("%s\t\t%s\n", c[i].name, c[i].phone);
                    }
                }
                break;

            case 3:
                printf("\nEnter Name to Search: ");
                scanf(" %[^\n]", searchName);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    int j = 0;
                    while(searchName[j] == c[i].name[j] &&
                          searchName[j] != '\0' &&
                          c[i].name[j] != '\0')
                    {
                        j++;
                    }

                    if(searchName[j] == '\0' && c[i].name[j] == '\0')
                    {
                        printf("\nContact Found:\n");
                        printf("Name : %s\n", c[i].name);
                        printf("Phone: %s\n", c[i].phone);
                        found = 1;
                        break;
                    }
                }

                if(!found)
                    printf("Contact not found.\n");

                break;

            case 4:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 4);

    return 0;
}