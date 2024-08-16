#include <stdio.h>

int main ()

{int subject;

printf("Which among the following subjects have you passed in?\n");

printf(" 1- Science\n 2- Maths\n 3- Both Science and Maths\n");

scanf("%d", &subject);

if (subject == 1)
{
   printf("Congratulations! You have recieved a prize of Rs.15\n ");
}
 else if (subject == 2)
 {
    printf("Congratuations! You have recieved a prize of Rs.15\n");
 }

else if (subject == 3)
{
   printf("Congratulations!! You have recieved a prize of Rs.45\n");
}

 else {
    printf("You have made an invalid choice\n");
 }

 return 0;
}