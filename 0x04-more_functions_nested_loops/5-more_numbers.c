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
int i = 0;
int j = 0;
while (i < 10)
{
while (j < 15)
{
print_last_digit(j);
j++;
}
_putchar('\n');
i++;
}
}
