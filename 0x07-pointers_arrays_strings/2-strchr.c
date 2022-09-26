#include "main.h"

/**
 * _strchr - encodes a string using rot13
 * @s: input string.
 *
 * @c: input char.
 *
 * Return: the pointer to dest.
 */

char *_strchr(char *s, char c)
{
int i;
char *oc = NULL;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
oc = &s[i];
break;
}
}
return (oc);
}
