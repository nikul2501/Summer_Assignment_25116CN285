#include <stdio.h>

struct Ticket
{
    int ticketNo;
    char name[50];
    int seats;
};

int main()
{
    struct Ticket t[100];
    int n = 0, choice, ticketNo, i, found;

    do
    {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. Display Bookings\n");
        printf("3. Search Booking\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter Ticket Number: ");
                scanf("%d", &t[n].ticketNo);

                printf("Enter Passenger Name: ");
                scanf(" %[^\n]", t[n].name);

                printf("Enter Number of Seats: ");
                scanf("%d", &t[n].seats);

                n++;
                printf("Ticket booked successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("\nNo bookings found.\n");
                }
                else
                {
                    printf("\nBooked Tickets:\n");
                    printf("-------------------------------------------\n");
                    printf("Ticket No\tName\t\tSeats\n");
                    printf("-------------------------------------------\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("%d\t\t%s\t\t%d\n",
                               t[i].ticketNo,
                               t[i].name,
                               t[i].seats);
                    }
                }
                break;

            case 3:
                printf("\nEnter Ticket Number to Search: ");
                scanf("%d", &ticketNo);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(t[i].ticketNo == ticketNo)
                    {
                        printf("\nBooking Found:\n");
                        printf("Ticket No : %d\n", t[i].ticketNo);
                        printf("Passenger : %s\n", t[i].name);
                        printf("Seats     : %d\n", t[i].seats);
                        found = 1;
                        break;
                    }
                }

                if(!found)
                    printf("Booking not found.\n");

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