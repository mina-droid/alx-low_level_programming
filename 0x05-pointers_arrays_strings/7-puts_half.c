#include "main.h"

/**
* _strlen-swaps the values of two integers
*
* @s: string
*
* Return: int
*/

int _strlen(char *s)
{
int count = 0;
while (*s != '\0')
{
count++;
s++;
}
return (count);
}

/**
* puts2-prints a string followed by a new line, to stdout
*
* @str: string
*
* Return: void
*/

void puts_half(char *str)
{
int strL = _strlen(str);
int i;
for (i = 0; i < strL; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
