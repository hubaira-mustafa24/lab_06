#include <stdio.h>

int main()
{
    int notes500[5] = {10, 5, 8, 12, 6};
    int notes200[5] = {20, 15, 10, 8, 14};
    int notes100[5] = {30, 25, 40, 35, 20};

    int i;
    int total = 0;
    int amount;

    for(i = 0; i < 5; i++)
    {
        total = total + notes500[i] * 500;
        total = total + notes200[i] * 200;
        total = total + notes100[i] * 100;
    }

    printf("Total money in ATM = %d\n", total);

    printf("Enter withdrawal amount: ");
    scanf("%d", &amount);

    if(amount > total)
    {
        printf("Insufficient Funds");
    }
    else if(amount % 100 != 0)
    {
        printf("Invalid Amount");
    }
    else
    {
        printf("Transaction Approved");
    }

    return 0;
}