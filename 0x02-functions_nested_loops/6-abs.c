#include "main.h"

/**
 * _abs - used to find the absolute value of numbers
 *@a: character argument
 * Return: integer
 */

int _abs(int a)
{
int abs;
if (a > 0)
{
abs = a;
}
if (a == 0)
{
abs = 0;
}
if (a < 0)
{
abs = (-a);
}
return (abs);

}
