#include "main.h"
/**
* jack_bauer - a function that prints every min of the day starting 00:00
*/
void jack_bauer(void)
{
int hrs = 0, mins;
while (hrs < 24)
{
mins = 0;
while (mins < 60)
{
_putchar((hrs / 10) + '0');
_putchar((hrs % 10) + '0');
_putchar(':');
_putchar((mins / 10) + '0');
_putchar((mins % 10) + '0');
_putchar('\n');
mins++;
}
hrs++;
}
}
