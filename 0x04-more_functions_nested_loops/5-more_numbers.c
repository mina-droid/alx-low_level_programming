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
 * more_numbers - prints numbers
 * Return:0
 */
void more_numbers(void)
{
	char n, c;
	int i = 0;


	while (i < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			c = n;
			if (n > 9)
			{
				_putchar('1');
				c = n % 10;
			}

			_putchar('0' + c);
		}

		_putchar('\n');
		i++;
	}

}
