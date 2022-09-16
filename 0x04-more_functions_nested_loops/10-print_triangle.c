#include "main.h"
/**
 * print_triangle - check for a digit
 * @n : number of \\ to be printed
 * Return:void
 */

void print_triangle(int size)
{

	int i = 0, ii,j;

	while (i < size && size > 0)
	{
		ii = 0;
		while (ii < size)
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
	if (i == 0)
		_putchar('\n');

}
