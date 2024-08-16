# include <stdio.h>

int main() {
     int fac = 1, num, i = 1;
    printf("Enter a no. you want the factorial of: ");
    scanf("%d", &num );

do
{
    fac *= i;
    i++;

} while (i <= num);

if (num==0 || num==1)
{
    printf("");
}
 printf("%d factorial equals %d", num, fac);

return 0;
}

