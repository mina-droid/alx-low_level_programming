#include "main.h"
/**
 * print_diagonal - prints numbers
 * @n: points
 * Return:0
 */
void print_diagonal(int n)
{
	int i = 0;
	int j = 0;
	while (i < n && n > 0)
	{
		_putchar('\\');
                _putchar('\n');
		while (j <= i)
		{
			_putchar(' ');
			j++;
		}
		i++;
	}
	_putchar('\n');
}
