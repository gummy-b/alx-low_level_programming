#include "main.h"
/**
* print_alphabet - a program that prints alphabets
* Return: Always 0.
*/

/* function that prints alphabets*/
void print_alphabet(void)
{
char alph = 'a';
while (alph <= 'z')
{
_putchar(alph);
alph++;
}
_putchar('\n');
}
