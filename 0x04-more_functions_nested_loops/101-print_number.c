#include "main.h"

/**
* print_last_digit - prints the last digit of a number
*
* Parameters: Integer
*
* @n: int
*
* Return: (lD) the last digit of a number
*/

int  print_last_digit(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n == 0)
{
_putchar('0');
return (0);
}
else if (n / 10)
{
print_last_digit(n / 10);
}
_putchar(n % 10 + '0');
return (0);
}

/**
* print_number - prints the last digit of a number
*
* Parameters: Integer
*
* @n: int
*
* Return: (lD) the last digit of a number
*/

void print_number(int n)
{
print_last_digit(n);
_putchar('\n');
}
