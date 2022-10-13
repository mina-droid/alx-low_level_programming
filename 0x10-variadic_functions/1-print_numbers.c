#include "variadic_functions.h"

/**
*print_numbers-sum all args
*@n:number
*@separator:string
*Return: sum
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list argL;
unsigned int i;
va_start(argL, n);
for (i = 0; i < n; i++)
{
_putchar('h');
}
va_end(argL);
}
