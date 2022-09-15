#include "main.h"
#include <stdio.h>
/**
 * print_square - check for a digit
 * @n : number of _ to be printed
 * Return:void
 */

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
_putchar(' ');
}
else if (i % 3 == 0)
{
printf("Fizz");
_putchar(' ');
}
else if (i % 5 == 0)
{
printf("Buzz");
_putchar(' ');
}
else
{
printf("%d", i);
_putchar(' ');
}
}
}
