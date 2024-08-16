#include <stdio.h>

int main() {
    int i, n, c;
    printf("Enter a number you want the multiplication table of:\n");
    scanf("%d", &n);
    
    for ( i = 1; i < 21; i++)
    {
        c = n * i;
       printf("%d '*' %d = %d\n", n, i, c);
    }
    
    return 0;
}
