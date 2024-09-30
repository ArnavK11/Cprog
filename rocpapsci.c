#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int randomNum(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int main()
{
    char p[10], x[10];
    int p1 = 0, p2 = 0;

    while (p1 <= 3 && p2 <= 3)
    {

        int Val = randomNum(3);
        if (Val == 0)
        {
            strcpy(x, "Rock");
        }
        else if (Val == 1)
        {
            strcpy(x, "Paper");
        }
        else if (Val == 2)
        {
            strcpy(x, "Scissors");
        }

        printf("Choose Rock, Paper or Scissors\n");
        scanf(" %s", p);

        if (strcmp(x, p) == 0)
        {
            printf("You both chose %s\nComputer: %d\nYou: %d\n", x, p1, p2);
        }
        if ((strcmp(x, "Rock") == 0 && strcmp(p, "Paper") == 0) ||
            (strcmp(x, "Paper") == 0 && strcmp(p, "Scissors") == 0) ||
            (strcmp(x, "Scissors") == 0 && strcmp(p, "Rock") == 0))
        {
            p2++;
            printf("Computer chose %s\nComputer: %d\nYou: %d\n", x, p1, p2);
        }
        else if ((strcmp(x, "Rock") == 0 && strcmp(p, "Scissors") == 0) ||
                 (strcmp(x, "Scissors") == 0 && strcmp(p, "Paper") == 0) ||
                 (strcmp(x, "Paper") == 0 && strcmp(p, "Rock") == 0))
        {
            p1++;
            printf("Computer chose %s\nComputer: %d\nYou: %d\n", x, p1, p2);
        }

        if (p1 == 3)
        {
            break;
        }

        if (p2 == 3)
        {
            break;
        }
    }

    return 0;
}