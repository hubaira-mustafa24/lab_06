#include <stdio.h>

int main()
{
    int seats[15] = {1, 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0, 1};
    int i;
    int booked = 0;
    int empty = 0;
    int first = -1;
    int last = -1;
    int count = 0;

    for(i = 0; i < 15; i++)
    {
        if(seats[i] == 1)
        {
            booked++;
        }
        else
        {
            empty++;
        }
    }

    for(i = 0; i < 15; i++)
    {
        if(seats[i] == 0)
        {
            if(first == -1)
            {
                first = i;
            }

            last = i;
        }
    }

    printf("Booked seats = %d\n", booked);
    printf("Empty seats = %d\n", empty);

    if(first != -1)
    {
        printf("First available seat = %d\n", first + 1);
    }

    if(last != -1)
    {
        printf("Last available seat = %d\n", last + 1);
    }

    for(i = 0; i < 15 && count < 3; i++)
    {
        if(seats[i] == 0)
        {
            seats[i] = 1;
            count++;
        }
    }

    printf("\nFinal seating chart:\n");

    for(i = 0; i < 15; i++)
    {
        printf("%d ", seats[i]);
    }

    return 0;
}