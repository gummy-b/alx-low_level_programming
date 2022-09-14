#include "main.h"
/**
* _isalpha - checks if letter is part of the alphabet
* @c: accepts char to evaluate if its part of the alphabet
* Return: Always 0.
*/

int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
