#include <unistd.h>
/**
* main: Entry Point
* Descirption: prints char c to standard output
* Return: Always 0
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

