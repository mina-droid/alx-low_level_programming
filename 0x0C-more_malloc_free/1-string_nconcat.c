#include <stdlib.h>
#include "main.h"
/**
 *_strlen_recursion - encodes a string using rot13
 * @s: input string.
 *
 * Return: the pointer to dest.
 */

unsigned int _strlen_recursion(char *s)

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
unsigned int len1, len2, i, j;
char *strcon;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
len1 = _strlen_recursion(s1);
len2 = _strlen_recursion(s2);
if (n >= len2)
{
n = len2;
}
strcon = malloc((sizeof(char) * (len1 + n)) +1);
if (strcon == NULL)
{
return (NULL);
}
for (i = 0; *(s1 + i) != '\0'; i++)
{
*(strcon + i) = *(s1 + i);
}
for (j = 0; *(s2 + j) != '\0' && j < n; j++)
{
*(strcon + i) = *(s2 + j);
i++;
}
*(strcon + i) = '\0';
return (strcon);
}
