#include <stdio.h>
void arrayRev(int arr[], int size)
{
    int x;
    for (int i = 0; i < size/2; i++)
    {
        x = arr[i];
        arr[i] = arr[7-i-1];
        arr[7-i-1] = x;
    }
}
int main()
{
    int arr[7];
    printf("Enter 7 numbers: ");
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The array is: ");
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    arrayRev(arr, 7);

    printf("The reversed array is: ");
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}