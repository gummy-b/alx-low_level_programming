#include "main.h"
/**
* main - a program that prints alphabets
* Return: Always 0.
*/
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
