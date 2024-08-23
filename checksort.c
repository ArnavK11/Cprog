#include <stdio.h>
#include <stdbool.h>

bool sortArray(int arr[5], int n){
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= arr[i+1])
        {
            return false;
        }
    }
        return true;
    }



int main() {
  printf("Enter 5 no.s : ");
  int arr[5], m=5;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    if (sortArray(arr, m)) {
        printf("The array is sorted.\n");
    } else {
        printf("The array is not sorted.\n");
    }
  
   return 0;
}