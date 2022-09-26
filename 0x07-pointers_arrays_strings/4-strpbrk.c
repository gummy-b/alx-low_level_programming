#include "main.h"
/**
* *_strbrk - a function tat searches for any bytes
* Description: Returns a pointer to the byte in s that
* matches one of the bytes in accept.
* @s: char pointer input.
* @accept: char pointer input.
* Return: char number if bytes else NULL.
*/
char *_strpbrk(char *s, char *accept)
{
int i, b;
i = 0;
while (s[i] != '\0')
{
b = 0;
while (accept[b] != '\0')
{
if (s[i] == accept[b])
return (s + i);
b++;
}
i++;
}
return ('\0');
}
