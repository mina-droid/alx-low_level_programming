#include "main.h"

/**
* print_sign - checks if a number is positive or negative or zero
*
* Parameters: TInteger
*
* @n: int
*
* Return: (1) if it is Positive (0) if it is zero (-) otherwise
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
