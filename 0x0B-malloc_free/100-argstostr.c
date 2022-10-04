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
 * argstostr - function
 *@ac: length of argv
 *@av: length of argv
 *Return: Always 0
 */

/**
 * str_concat - function
 *@s1: length of argv
 *@s2: length of argv
 *Return: Always 0
 */

char *str_concat(char *s1, char *s2)
{
int len1, len2, i, j;
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
strcon = malloc((sizeof(char) * (len1 + len2)) +1);
if (strcon == NULL)
{
return (NULL);
}
for (i = 0; *(s1 + i) != '\0'; i++)
{
*(strcon + i) = *(s1 + i);
}
for (j = 0; *(s2 + j) != '\0'; j++)
{
*(strcon + i) = *(s2 + j);
i++;
}
return (strcon);
}

char *argstostr(int ac, char **av)
{
int size, i;
char *res;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
size += _strlen_recursion(av[i]);
}
res = malloc((sizeof(char) * size) + ac);
for (i = 1; i < ac; i++)
{
if (av[i] == "\"")
{
continue;
}
res = str_concat(res, av[i]);
res = str_concat(res, "\n");
}
return (res);
}
