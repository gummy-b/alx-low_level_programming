#include "main.h"
/**
* *_memcpy - function that copies mem area
* @dest: destination char input
* @src: source char input
* @n: tracker uint input
* Return: char mem copies
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
i = 0;
while(i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
