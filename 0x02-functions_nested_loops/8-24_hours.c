#include "main.h"

/**
* jack_bauer - prints the last digit of a number
*
* Parameters: none
*
*
* Return: (lD) the last digit of a number
*/

void jack_bauer(void)
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
