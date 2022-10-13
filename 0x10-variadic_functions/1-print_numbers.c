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
if (separator == NULL)
{
separator = "";
}
va_start(argL, n);
for (i = 0; i < n; i++)
{
printf("%d%s ", va_arg(argL, int), separator)
}
_putchar('\n');
va_end(argL);
return;
}
