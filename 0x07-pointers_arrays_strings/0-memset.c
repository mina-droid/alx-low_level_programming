#include "main.h"
/**
 * _memset - encodes a string using rot13
 * @s: input string.
 *
 * @b: input char.
 *
 * @n: input int.
 *
 * Return: the pointer to dest.
 */

char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
