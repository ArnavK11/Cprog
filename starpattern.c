#include <stdio.h>
int main() {
    int m, n;
    printf("Enter 0 if you want Triangular Star Pattern or 1 if you want Reverse Triangular Star Pattern\n");
    scanf("%d", &n);

    printf("Enter the number of rows of the pattern you want: ");
    scanf("%d", &m);

    if (n==0)
    {
        for (int i = 1; i <= m; i++)
     {

        for (int j = 1; j <= i; j++)
        {
           printf("*");
        }
        printf("\n");
     }
     
    }

    else if (n==1)
    {
      for (int i = m; i >= 1; i--)
     {

        for (int j = 1; j <= i; j++)
        {
           printf("*");
        }
        printf("\n");
     }
    }
    
    
    return 0;
}