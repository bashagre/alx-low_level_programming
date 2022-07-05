#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @a: character argument
 * Return: integer
 */

int print_last_digit(int a)
{
int last;
last = a % 10;
if (last < 0)
{
last = (-last);
}
_putchar(last);
return (last);
}
