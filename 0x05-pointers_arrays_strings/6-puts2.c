#include "main.h"
/**
* puts2 - function that prints every other char
* Descripption: a function that printss every other
* character of a string
* @str: input string
* Return: void
*/
void puts2(char *str)
{
int i, j;
for (i = 0; str[i] != '\0'; i++)
{
;
}
for (j = 0; j < i; j += 2)
{
_putchar(str[j]);
}
_putchar(10);
}
