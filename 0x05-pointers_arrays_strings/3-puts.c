#include "main.h"

/**
* _puts-prints a string followed by a new line, to stdout
*
* @str: string
*
* Return: void
*/

void _puts(char *str)
{
int strL = _strlen(str);
int i;
for (i = 0; i <= strL; i++)
{
_putchar(str[i]);
}
}
