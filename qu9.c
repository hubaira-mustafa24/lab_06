#include <stdio.h>

int main()
{
    int transfers[10] = {5000, 50, 12000, 500000, 20,
                         8000, 25000, 300, 450000, 15000};

    int i;
    int flagged = 0;
    int normalCount = 0;
    int normalSum = 0;
    int largest = transfers[0];
    float average;

    for(i = 0; i < 10; i++)
    {
        if(transfers[i] < 100)
        {
            printf("Transfer %d: Too Small\n", i + 1);
            flagged++;
        }
        else if(transfers[i] > 200000)
        {
            printf("Transfer %d: Too Large\n", i + 1);
            flagged++;
        }
        else
        {
            normalSum = normalSum + transfers[i];
            normalCount++;
        }

        if(transfers[i] > largest)
        {
            largest = transfers[i];
        }
    }

    average = normalSum / (float)normalCount;

    printf("\nTotal flagged transfers = %d", flagged);
    printf("\nAverage normal transfer = %.2f", average);
    printf("\nLargest transfer = %d", largest);

    return 0;
}