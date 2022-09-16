#include "holberton.h"

/**
 * print_triangle - check for a digit
 * @size : integer type
 * Return:void
 */

void print_triangle(int size)
{

	int i = 1, ii, j;

	while (i <= size && size > 0)
	{
		ii = 0;
		while (ii < size - i)
		{
			_putchar(' ');
			ii++;
		}
		j = 0;
		while (j < i)
		{
			_putchar('#');
			j++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 1)
		_putchar('\n');
}
