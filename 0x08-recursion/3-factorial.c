#include "main.h"

/**
 *factorial - encodes a string using rot13
 * @n: input string.
 *
 * Return: the pointer to dest.
 */

int factorial(int n)
{
if (n == 1)
{
return (1);
}
else if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
return (n * factorial(n - 1));
}
