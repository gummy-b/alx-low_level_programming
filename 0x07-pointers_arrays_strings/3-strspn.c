#include "main.h"
/**
* _strspn - gets the length of a prefix substring
* Description: Returns the number of bytes in the initial
* segnment of s which consists only of bytes
* @s: pointer char input
* @accept: pointer char input
* Return: unsigned int
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int b, i, count, countref;
count = 0;
b = 0;
i = 0;
while (s[i] != '\0')
{
countref = count;
b = 0;
while (accept[b] != '\0')
{
if (s[i] == accept[b])
{
count = count + 1;
break;
}
b++;
}
if (countref == count)
return (count);
i++;
}
return (count);
}
