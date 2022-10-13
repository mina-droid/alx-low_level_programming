#include "variadic_functions.h"

/**
*sum_them_all-sum all args
*@n:number
*Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
va_list argL;
unsigned int i;
int sum = 0;
if (n == 0)
{
return (0);
}
va_start(argL, n);
for (i = 0; i < n; i++)
{
sum += va_arg(argL, int);
}
va_end(argL);
return (sum);
}
