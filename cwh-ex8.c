#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,o,p;

    char *ptr;

    // Id of E1

    printf("For Employee 1: \n");

    printf("Enter the size of your Employee Id: ");
    scanf("%d", &n);

    ptr = (char *)malloc(n * sizeof(char));

    printf("Enter your Employee Id\n");
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &ptr[i]);
    }

    printf("Employee Id of Employee 1 is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%c", ptr[i]);
    }

    // Id of E2

    printf("\nFor Employee 2: \n");

    printf("Enter the size of your Employee Id: ");
    scanf("%d", &o);

    ptr = (char *)realloc(ptr, o * sizeof(char));

    printf("Enter your Employee Id\n");
    for (int i = 0; i < o; i++)
    {
        scanf(" %c", &ptr[i]);
    }

    printf("Employee Id of Employee 2 is: ");
    for (int i = 0; i < o; i++)
    {
        printf("%c", ptr[i]);
    }

    // Id of E3 


    printf("\nFor Employee 3: \n");

    printf("Enter the size of your Employee Id: ");
    scanf("%d", &p);

    ptr = (char *)realloc(ptr, p * sizeof(char));

    printf("Enter your Employee Id\n");
    for (int i = 0; i < p; i++)
    {
        scanf(" %c", &ptr[i]);
    }

    printf("Employee Id of Employee 3 is: ");
    for (int i = 0; i < p; i++)
    {
        printf("%c", ptr[i]);
    }
    return 0;
}