#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char password[5][50];
    int score[5];
    int i, j;
    int strongest = 0;
    int below10 = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Enter password %d: ", i + 1);
        scanf("%s", password[i]);

        score[i] = 0;

        for (j = 0; password[i][j] != '\0'; j++)
        {
            if (islower(password[i][j]))
                score[i] = score[i] + 1;

            else if (isupper(password[i][j]))
                score[i] = score[i] + 2;

            else if (isdigit(password[i][j]))
                score[i] = score[i] + 3;
        }

        if (strlen(password[i]) >= 8)
            score[i] = score[i] + 5;

        if (strstr(password[i], "123") != NULL)
            score[i] = score[i] - 3;

        printf("Password: %s  Score: %d\n", password[i], score[i]);

        if (score[i] < 10)
            below10++;

        if (score[i] > score[strongest])
            strongest = i;
    }

    printf("\nStrongest password: %s", password[strongest]);
    printf("\nStrongest score: %d", score[strongest]);
    printf("\nPasswords below 10: %d", below10);

    return 0;
}