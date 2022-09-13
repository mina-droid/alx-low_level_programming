#include "main.h"

/**
* times_table - print 9 times table
*
* Parameters: none
*
*
* Return: void
*/

int  print_last_digit(int n)
{
if (n == 0)
{
_putchar('0');  
}
else if (n / 10)
{
print_last_digit(n / 10);
}
_putchar(n % 10 + '0');
return (0);
}

void times_table(void)
{
int i;
int j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
print_last_digit((i * j));
_putchar (',');
_putchar (' ');
}
_putchar ('\n');
}
}
