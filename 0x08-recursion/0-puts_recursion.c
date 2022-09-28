#include "main.h"

/**
 *_puts_recursion - encodes a string using rot13
 * @s: input string.
 *
 * Return: the pointer to dest.
 */

void _puts_recursion(char *s)

{
if (*s == '\0')
{
_putchar('\n');
return;
}

_putchar (*s);
_puts_recursion(s + 1);

}
