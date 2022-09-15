#include "main.h"
/**
* print_line - Drow a straight line"
* @n: number of underscores to be printed
* Return: nothing.
*/
void print_line(int n)
{
int c;
c = 0;
while (c < n)
{
_putchar(95);
c++;
}
_putchar(10);
}
