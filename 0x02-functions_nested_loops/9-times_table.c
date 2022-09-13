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
* times_table - print 9 times table
*
* Parameters: none
*
*
* Return: void
*/

void times_table(void)
{
int i;
int j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
print_last_digit((i * j));
if (j == 9)
{
continue;
}
_putchar (',');
if ((i * (j + 1)) > 9)
{
_putchar (' ');
}
else
{
_putchar (' ');
_putchar (' ');
}
}
_putchar ('\n');
}
}
