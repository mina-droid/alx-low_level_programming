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
* print_to_98 - adds two numbers
*
* Parameters: one intger
*
* @n: Start Number
*
* Return: result
*/

void print_to_98(int n)
{
int i;
if (n < 98)
{
for (i = n; i < 99; i++)
{
print_last_digit(n);
if (i == 98)
{
continue  
}
_putchar(',');
_putchar(' ');
}
_putchar('\n');  
}
else if (n > 98)
{
for (i = n; i > 97; i--)
{
print_last_digit(n); 
if (i == 98)
{
continue  
}
_putchar(',');
_putchar(' ');
}
_putchar('\n'); 
}
else
{
print_last_digit(98);
_putchar('\n');
}
}
