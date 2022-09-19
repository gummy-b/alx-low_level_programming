#include "main.h"
/**
* _puts - function that prints a string to stdout
* Description: a function that prints a string
* followed by a new line to stdout
* @str: input string
* Return: void
*/
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar(10);
}
