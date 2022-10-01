#include "main.h"

/**
 * _isdigit - checks for upper case charchter
 *
 * @c: the ascii number of the digit
 * Return: 1 if uppercase 0 otherwise .
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
