#include "main.h"
/**
* swap_int - takes in pointers a & b
* Description: a function that swaps the values of two integers.
* @a: 1st integer
* @b: 2nd integer
* Return: void
*/
void swap_int(int *a, int *b)
{
int swap;
swap = *a;
*a = *b;
*b = swap;
}
