#include <stdio.h>

int factorial(int num);

int main()
{
    int n;
    printf("Enter a no. you want the factorial of: ");
    scanf("%d", &n);

    printf("The factorial of %d is %d\n", n, factorial(n));

    return 0;
}

int factorial(int num)
{
    if (num == 0 || num == 1){
        return 1;
    }
    else {
        return (num * factorial(num - 1));
    }
   
}