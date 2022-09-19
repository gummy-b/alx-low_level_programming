#include "main.h"
/**
* _strcpy - copies string pointed by src
* Description: a function that copies a string
* pointed to by src
* @dest: destination pointer
* @src: source pointer
* Return: destination char
*/
char *_strcpy(char *dest, char *src)
{
int i, j;
i = 0;
while (src[i] != '\0')
{
i++;
}
for (j = 0; j <= i; j++)
{
*(dest + j) = *(src + j);
}
return (dest);
}
