#include "main.h"

/**
 * main - prints the alphabet in smallcase
 *
 * Return: Always 0.
 */


int main(void)
{
print_alphabet();
return (0);
}

/**
 * print_alphabet - prints stuff in amallcase
 *
 * return: nothing
 */

void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
