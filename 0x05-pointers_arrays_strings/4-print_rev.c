#include "main.h"
/**
* print_rev - function that prints param in reverse
* a function that prints a string in reverse
* @s: string to be reversed
* Return: void
*/
void print_rev(char *s)
{
int i,j;
char c;
i = 0;
while (s[i] != '\0')
{
i++;
}
j = i -1;
i = 0;
while (i < j)
{
c = s[j];
s[j] = s[i];
s[i] = c;
i++;
j--;
}
}
