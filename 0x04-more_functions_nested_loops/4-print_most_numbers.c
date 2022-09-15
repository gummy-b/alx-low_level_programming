#include "main.h"
/**
* print_most_numbers - prints the numbers from 0-9
* do not print 2 and 4. Only use _putchar twice.
* Return: Nothing.
*/
void print_most_numbers(void)
{
int i;
for (i = 48; i < 58; i++)
{
if (i != 50 && i != 52)
{
_putchar(i);
}
}
_putchar(10);
}
