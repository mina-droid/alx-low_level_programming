#include "main.h"

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
