#include <stdio.h>

int main()
{
    int amount;
    int transactions = 0;
    int total = 0;

    while(1)
    {
        printf("Enter withdrawal amount (0 to exit): ");
        scanf("%d", &amount);

        if(amount == 0)
        {
            break;
        }

        transactions++;
        total = total + amount;

        printf("Transaction processed.\n");
    }

    printf("\nSession ended.");
    printf("\nTotal transactions = %d", transactions);
    printf("\nTotal amount withdrawn = %d", total);

    return 0;
}