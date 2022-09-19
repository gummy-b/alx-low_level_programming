#include "main.h"
/**
* print_rev - function that prints param in reverse
* a function that prints a string in reverse
* @s: string to be reversed
* Return: void
*/
void print_rev(char *s)
{
int i, j;
i = 0;
while (s[i] != '\0')
{
i++;
}
j = i - 1;
while (s[j])
{
_putchar(s[j]);
j--;
}
_putchar(10);
}


