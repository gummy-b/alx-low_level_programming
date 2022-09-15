#include "main.h"
/**
* more_numbers - a functions tat prints 10 times the numbers 0-14.
* Return: nothing
*/
void more_numbers(void)
{
int c, i;
c = 0;
while (c < 10)
{
i = 10;
while (i < 15)
{
if (i > 9)
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
i++;
}
c++;
_putchar('\n');
}
}
