#include <stdio.h>

int main()
{
    int marks[15];
    int i;
    int sum = 0;
    int count100 = 0;
    int highest, lowest;
    float average;

    printf("Enter marks of 15 students:\n");

    for(i = 0; i < 15; i++)
    {
        scanf("%d", &marks[i]);

        marks[i] = marks[i] + 5;

        if(marks[i] > 100)
        {
            marks[i] = 100;
        }
    }

    highest = marks[0];
    lowest = marks[0];

    for(i = 0; i < 15; i++)
    {
        sum = sum + marks[i];

        if(marks[i] == 100)
        {
            count100++;
        }

        if(marks[i] > highest)
        {
            highest = marks[i];
        }

        if(marks[i] < lowest)
        {
            lowest = marks[i];
        }
    }

    average = sum / 15.0;

    printf("\nNew average = %.2f", average);
    printf("\nStudents with 100 = %d", count100);
    printf("\nRange = %d", highest - lowest);

    return 0;
}