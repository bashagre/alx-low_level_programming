#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @a: character argument
 * Return: integer
 */

int print_last_digit(int a)
{
int pld;

pld = (a % 10);

if (pld < 0)
{
pld = (-1 * pld);
}
_putchar(pld + '0');
return (pld);
}
