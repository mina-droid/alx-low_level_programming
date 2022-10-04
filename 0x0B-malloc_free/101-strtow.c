#include "main.h"
#include <stdlib.h>

/**
 *_strcmp - convert a string to an integer.
 * @s1: string one
 *
 * @s2: string two
 *
 * Return: string
 */
int _strcmp(char *s1, char *s2)
{
int res = 0;
while (*s1 != '\0' && *s2 != '\0')
{
if (*s1 != *s2)
{
res = (*s1 - *s2);
break;
}
s1++;
s2++;
}
return (res);
}

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
 * strtow - function
 *@str: length of argv
 *Return: Always 0
 */


char **strtow(char *str)
{
int i, a = 0, b = 0;
char res[][];
if (str == NULL || str == "")
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ')
{

}
}
}
