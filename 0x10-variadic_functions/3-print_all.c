#include "variadic_functions.h"

/**
*print_all-sum all args
*@format:number
*Return: sum
*/

void print_all(const char * const format, ...)
{
va_list argL;
int i = 0, j = 0;
char *str = "";
va_start(argL, format);
while (format[i] != '\0')
{
if (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')
{
str[j] = format[i];
j++;
}
i++;
}
str[j] = '\0';
printf("\n");
va_end(argL);
}
