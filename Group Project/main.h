#ifndef MAIN_H
#define MAIN_H

#include<stdlib.h>
#include<stdarg.h>

/**
 * struct printer - A new struct type defining a printer.
 * @symbol: A symbol representing a data type.
 * @print: A function pointer to a function that prints
 *         a data type corresponding to symbol.
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);

} printer_t;

int _putchar(char c);
int _printf(const char *format, ...);

#end
