#include "main.h"

/**
 * _isdigit - checks for upper case charchter
 *
 * @c: the ascii number of the digit
 * Return: 1 if digit 0 otherwise .
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}

/**
* _atoi-prints a string followed by a new line, to stdout
*
* @s: string
*
* Return: the intger of that string
*/

int _atoi(char *s)
{
while (*s != '\0')
{
if (_isdigit(*s) && *(s--) == '-')
{
_putchar
}
}
}
