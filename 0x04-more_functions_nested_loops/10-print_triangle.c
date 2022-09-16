#include "main.h"
/**
 * print_triangle - check for a digit
 * @n : number of _ to be printed
 * Return:void
 */

void print_triangle(int size)
{

	int i = 0, ii;

	while (i < n && n > 0)
	{
		ii = 0;
		while (ii < n)
		{
			_putchar('#');
			ii++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');

}
