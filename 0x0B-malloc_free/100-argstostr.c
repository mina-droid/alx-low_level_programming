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
res = malloc(sizeof(char) * size);

}
