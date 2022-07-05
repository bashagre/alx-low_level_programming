#include "main.h"

/**
 * _islower - accepts a parameter "c" checks if input is in lowercase
 * @c: character argument
 * Return: 1 and 0
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
