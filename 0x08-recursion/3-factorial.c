#include "main.h"

/**
 * factorial - prints the factorial of an input number
 * @n: input
 * Return: recursion
 */

int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}

	else if (n < 0)
	{
		return (-1);
	}

	return (n * factorial(n - 1));

}
