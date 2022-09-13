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

int print_last_digit(int n)
{
int r1 = (n / 10);
int r2 = (10 * r1);
int lD = (n - r2);
if (n < 0)
{
lD = -1 * lD;
}
_putchar(lD + '0');
return (lD);
}
