#include <stdio.h>

int main() {
    int arr[] = {3, 43, 54, 12, 29}, max = 0;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        
    }
    
    printf("%d", max);
    return 0;


}