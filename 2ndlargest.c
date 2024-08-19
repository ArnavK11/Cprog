#include <stdio.h>

int main() {
    int arr[] = {3, 43, 54, 12, 29}, max = 0, max2 = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        
    }

    for (int j = 0; j < 5; j++)
    {
        if (arr[j] > max2, arr[j] < max){
            max2 = arr[j];
        }
    }
    printf("%d\n", max);
    printf("%d\n", max2);
    return 0;
}
