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
* rev_string- prints a string, in reverse followed by a new line
*
* @s: string
*
* Return: void
*/

void rev_string(char *s)
{
int strL = _strlen(s);
int i;
for (i = 0; i < strL; i++)
{
_putchar(s[i]);
}
_putchar('\n');
for (i = strL - 1; i > -1; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
