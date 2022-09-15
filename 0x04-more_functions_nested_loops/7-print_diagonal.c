#include "main.h"
/**
 * print_diagonal - prints numbers
 * @n: points
 * Return:0
 */
void print_diagonal(int n)
{
	int i = 0, j;
	while (i < n && n > 0)
	{
		j = 0;
		while (j <= i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
                _putchar('\n');
		i++;
	}
	_putchar('\n');
}
