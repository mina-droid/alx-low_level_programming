#include <stdlib.h>
#include "main.h"
/**
 *_strlen_recursion - encodes a string using rot13
 * @s: input string.
 *
 * Return: the pointer to dest.
 */

int _strlen_recursion(char *s)

{
if (*s == '\0')
{
return (0);
}

return (1 + _strlen_recursion(s + 1));

}

/**
 *string_nconcat - array for prints a string
 *@s1: number of memory
 *@s2: number of memory
 *@n: number of memory
 *Return: void
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2, i;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
len2 = _strlen_recursion(s2);
if (n >= len2)
{
n = len2;
}
}
