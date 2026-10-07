#include <stdio.h>

int main()
{
    int number;
    int original;
    int reversed = 0;
    int remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    while(number != 0)
    {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number = number / 10;
    }

    printf("Reversed = %d\n", reversed);

    if(original == reversed)
    {
        printf("Palindrome Confirmed");
    }
    else
    {
        printf("Not a Palindrome");
    }

    return 0;
}