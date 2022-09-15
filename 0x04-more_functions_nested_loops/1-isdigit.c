#include "main.h"
/**
* _isdigit - checks to see whether a char is a digit or not
* @c: char input to be tested.
* Return: 1 if c is a digit, otherwise 0.
*/
int _isdigit(int c)
{
if((c >= 48) && (c <= 57))
{
return (1);
}
return (0);
}
