#include "main.h"
/**
* _strlen - return length of string
* Description: a function that returns the length of a string
* @s: char pointer
* Return: length of @s
*/
int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
