#include "main.h"

/**
 * print_sign - prints the sign
 * @n: character argument
 * Return: 1,0 and -1
 */

int print_sign(int n)
{
if (n > 0)
{
return (1);
_putchar('+');
}
if (n == 0)
{
return (0);
_putchar('0');
}
else
{
return (-1);
_putchar('-');
}
}
