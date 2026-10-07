#include <stdio.h>

int main()
{
    int stock[10];
    int minimum[10];
    int i;
    int totalReorder = 0;
    int largestReorder = 0;
    int largestProduct = -1;

    printf("Enter stock quantities:\n");

    for (i = 0; i < 10; i++)
        scanf("%d", &stock[i]);

    printf("Enter minimum quantities:\n");

    for (i = 0; i < 10; i++)
        scanf("%d", &minimum[i]);

    for (i = 0; i < 10; i++)
    {
        if (stock[i] < minimum[i])
        {
            int reorder = minimum[i] - stock[i];

            printf("Product %d needs %d units\n", i + 1, reorder);

            totalReorder = totalReorder + reorder;

            if (reorder > largestReorder)
            {
                largestReorder = reorder;
                largestProduct = i;
            }
        }
    }

    printf("\nTotal reorder quantity = %d", totalReorder);

    if (largestProduct != -1)
    {
        printf("\nLargest reorder: Product %d", largestProduct + 1);
        printf("\nLargest reorder quantity = %d", largestReorder);
    }

    return 0;
}