#include <stdio.h>

void filledRect();

int main() {

    int row, col;
    printf("Enter no. of rows \n");
    scanf("&d", &row);

    printf("Enter no. of columns \n");
    scanf("&d", &col);

    filledRect(row, col);

    return 0;
}

    void filledRect(int row, int col) {
        int i, j;
    for ( i = 0; i < row+1; i++)
    {
        for ( j = 0; j < col+1; j++)
        {
           printf("*");
        }
        
        printf("\n");
    }
    
}
   