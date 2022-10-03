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
 *_strcat - convert a string to an integer.
 * @dest: string one
 *
 * @src: string two
 *
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
int dest_len = _strlen_recursion(dest);
while (*src != '\0')
{
dest[dest_len] = *src;
dest_len++;
src++;
}
dest[dest_len] = '\0';
return (dest);
}

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
