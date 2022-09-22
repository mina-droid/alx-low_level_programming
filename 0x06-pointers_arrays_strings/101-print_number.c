#include "main.h"

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

	int d = 1, i = 0, resp;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n / d > 9)
	{
		d *= 10;
		i++;
	}

	while (d >= 1)
	{
		resp = n / divisor;
	        _putchar('0' + resp);
		d = d / 10;
	}

	if (i == 0)
		_putchar('0' + n);

}
