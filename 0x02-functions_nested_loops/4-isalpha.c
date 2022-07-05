#include "main.h"

/**
 * _isalpha - checks if input is in lowercase or uppercase
 * @c: character argument
 * Return: 1 and 0
 */

int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}

