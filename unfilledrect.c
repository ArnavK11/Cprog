#include <stdio.h>

int main()
{
    int col, row;
    printf("Enter no. of columns: ");
    scanf("%d", &col);

    printf("Enter no. of rows: ");
    scanf("%d", &row);
// Crossbar
    for (int i = 0; i < col; i++)
    {
        printf("*");   
    }
    printf("\n");
// baaju vale poles
   for (int j = 0; j < row-2; j++)
    {
        printf("*");

        for (int k = 0; k < col-2; k++)
        {
            printf(" ");
        }
        printf("*\n");
        
    }
    
    
// Bottom Crossbar
    for (int i = 0; i < col; i++)
    {
        printf("*");   
    }
    printf("\n");
    return 0;
}