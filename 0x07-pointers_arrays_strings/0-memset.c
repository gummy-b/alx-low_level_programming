#include "main.h"
/**
* *_memset - function that fills memory with constant bytes.
* Description: a function that fills memory with constant bytes.
* @s: char pointer input
* @b: char input
* @n: uint input
* Return: char set
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
i = 0;
while(i < n)
{
s[i] = b;
i++;
}
return (s);
}
