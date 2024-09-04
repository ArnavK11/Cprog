#include <stdio.h>
#include <string.h>
void parser(char string[])
{
    int a = 0, b = 0, i;
    // To not print h1 tag
    for (i = 0; i < strlen(string) - 1; i++)
    {
        if (string[i] == '<')
        {
            a = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            a = 0;
            continue;
        }

        if (a == 0)
        {
            string[b] = string[i];
            b++;
        }
    }
    string[b] = '\0';
    // Remove whitespaces from the beginning
    while (string[0] == ' ')
    {
        for (int i = 0; i < strlen(string); i++)
        {
            string[i] = string[i + 1];
        }
    }
    // Remove whitespaces from the end
    while (string[strlen(string) - 1] == ' ')
    {
        string[strlen(string) - 1] = '\0';
    }
}

int main()
{
    char string[] = "<h1>   The first line    </h1> ";
    parser(string);
    printf("The string is -%s-", string);

    return 0;
}