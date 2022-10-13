#include "variadic_functions.h"

/**
*print_strings-sum all args
*@n:number
*@separator:string
*Return: sum
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list argL;
unsigned int i;
va_start(argL, n);
for (i = 0; i < n; i++)
{
if (va_arg(argL, char *) == NULL)
{
printf("(nil)");
va_arg(argL, char *);
continue;
}
printf("%s", va_arg(argL, char *));
if (separator && i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(argL);
}
