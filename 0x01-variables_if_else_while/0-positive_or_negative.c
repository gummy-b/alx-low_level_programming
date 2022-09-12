#include <stdlib.h>
#include <stdio.h>
#include <time.h>


/*
* main: Program Entry Point
* Description: Program assigns random number and checks
* whether number is positive, negative or equal zero
* Return: Success (0)
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
