#include "main.h"

/**
 *_print_rev_recursion - encodes a string using rot13
 * @s: input string.
 *
 * Return: the pointer to dest.
 */

void _print_rev_recursion(char *s)

{
if (*s != '\0')
{
_puts_recursion(s + 1);
_putchar (*s);
}



}
