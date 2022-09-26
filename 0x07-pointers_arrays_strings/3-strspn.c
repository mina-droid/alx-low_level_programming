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
char *oc = '\0';
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
oc = &s[i];
break;
}
}
if (s[i] == c)
{
oc = &s[i];
}
return (oc);
}

/**
 *_strspn - encodes a string using rot13
 * @s: input string.
 *
 * @accept: input string.
 *
 * Return: the pointer to dest.
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int res = 0;
char *f = '\0';
unsigned int i;
for (i = 0; s[i] != '\0'; i++)
{
f = _strchr(s, accept[i]);
if (f != '\0')
{
res++;
}
}
res++;
return (res);
}
