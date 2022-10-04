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
 * argstostr - function
 *@ac: length of argv
 *@av: length of argv
 *Return: Always 0
 */


char *argstostr(int ac, char **av)
{
int size = 0, i = 0, j = 0 , l = 0;
char *res;
if (ac == 0 || av == NULL)
{
return (NULL);
}
while (i < ac)
{
j = 0;
while (av[i][j] != '\0')
{
size++;
j++;
}
i++;
}
size = size + ac + 1;
res = malloc((sizeof(char) * size));
if (res == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
if (_strcmp(av[i], "\"") == 0)
{
continue;
}
for (j = 0; av[i][j] != '\0'; j++)
{
res[l] = av[i][j];
l++;
}
res[l] = '\n';
l++;
}
return (res);
}
