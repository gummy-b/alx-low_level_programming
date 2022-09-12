#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - Entry Point
* Description: This program will assign a random number
* to the variable n each time it is executed.
* Return: Always 0
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n < 0)
{
printf("%d is negative\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is positive\n", n);
}
return (0);
}
