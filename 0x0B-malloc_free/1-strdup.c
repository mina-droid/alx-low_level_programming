#include "main.h"
#include <stdlib.h>

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
 * _strdup - function
 *@str: length of argv
 *Return: Always 0
 */

char *_strdup(char *str)
{
int len;
char *strup;
if (str == NULL)
{
return (NULL);
}
len = _strlen_recursion(str);
strup = malloc((sizeof(char) * len) +1);
if (strup == NULL)
{
return (NULL);
}
strup = str;
return (strup);
}
