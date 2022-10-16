#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

/**
 * _printf - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
int _printf(const char *format, ...)
{
	va_list valist;
	unsigned int i = 0, j;
	char *str;
	char c;
	int count = 0;

	va_start(valist, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if(format[i] == 'c')
			{
				c = va_arg(valist, int);
				write(1, &c, sizeof(char));
				count++;
				i++;
				continue;
			}
			else if (format[i] == 's')
			{	
				str = va_arg(valist, char *);
				write(1, str, strlen(str));
				count += strlen(str);
				i++;
				continue;
			}
            else if (format[i] == '%')
			{	
				c = 37;
				write(1, &c, sizeof(char));
				count++;
				i++;
				continue;
			}
		}
		write(1, &format[i], sizeof(char));
		count++;
		i++;
	}
	 va_end(valist);
	return (count);
}
