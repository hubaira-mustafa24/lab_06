#include <stdio.h>

int main()
{
    int fib[10];
    int i;

    fib[0] = 1;
    fib[1] = 1;

    for(i = 2; i < 10; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    printf("First 10 generations:\n");

    for(i = 0; i < 10; i++)
    {
        printf("Generation %d = %d\n", i + 1, fib[i]);
    }

    return 0;
}