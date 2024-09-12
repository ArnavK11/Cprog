#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n = 1;

    char *ptr;
    while (n <= 3)
    {
        printf("For Employee %d:\nEnter the size of your Employee Id: ", n);
        scanf("%d", &i);

        ptr = (char *)malloc(i * sizeof(char));

        printf("Enter your Employee Id\n");
        scanf("%s", ptr);

        printf("Employee Id of Employee %d is: %s\n", n, ptr);

        free(ptr);

        n++;
    }
    return 0;
}
