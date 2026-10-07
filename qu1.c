#include <stdio.h>

int main()
{
    int cars[12];
    int i, sum = 0, overloaded = 0;
    int highest, lowest;

    printf("Enter cars waiting at 12 signals:\n");

    for (i = 0; i < 12; i++)
    {
        scanf("%d", &cars[i]);
        sum = sum + cars[i];
    }

    float average = sum / 12.0;

    highest = cars[0];
    lowest = cars[0];

    for (i = 0; i < 12; i++)
    {
        if (cars[i] > average)
            overloaded++;

        if (cars[i] > highest)
            highest = cars[i];

        if (cars[i] < lowest)
            lowest = cars[i];
    }

    printf("\nAverage = %.2f", average);
    printf("\nOverloaded signals = %d", overloaded);
    printf("\nHighest cars = %d", highest);
    printf("\nLowest cars = %d", lowest);
    printf("\nDifference = %d", highest - lowest);

    return 0;
}