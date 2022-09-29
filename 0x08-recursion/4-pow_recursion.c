#include "main.h"

/**
 *_pow_recursion - encodes a string using rot13
 * @x: input number.
 *
  * @y: input number.
 *
 * Return: the pointer to dest.
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else if (y == 1)
{
return (x);
}
else if (x == 1 || x == 0)
{
return (x);
}
else
{
if (y % 2 == 0)
{
return (_pow_recursion(x, y / 2) * _pow_recursion(x, y / 2));
}
else
{
return (_pow_recursion(x, y / 2) * _pow_recursion(x, y / 2) * x);
}
}
}
