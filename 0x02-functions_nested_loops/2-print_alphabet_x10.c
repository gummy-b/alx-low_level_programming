#include "main.h"
/**
* print_alphabet_x10 - Prints alphabets x10, nested loops
* Return: Always 0.
*/

void print_alphabet_x10(void)
{
int nl = 0; /* new line */
while (nl < 10)
{
char al = 'a'; /* starting alphabet to loop from */
while (al <= 'z')
{
_putchar(al);
al++;
}
_putchar('\n');
nl++;
}
}
