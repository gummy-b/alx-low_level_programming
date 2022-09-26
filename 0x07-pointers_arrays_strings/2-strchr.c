#include "main.h"
/**
* *_strchr - string locator function
* Description: funtion that locates a character in a string
* @s: pointer char input
* @c: char input
* Return: char
*/
char *_strchr(char *s, char c)
{
int i;
i = 0;
while(s[i] != '\0')
{
if (s[i] == c)
{
s = s + i;
return (s);
}
i++;
}
if (c == '\0')
return (s + i);
return (0);
}
