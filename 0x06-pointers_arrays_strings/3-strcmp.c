#include "main.h"

/**
* _strlen-swaps the values of two integers
*
* @s: string
*
* Return: int
*/

int _strlen(char *s)
{
int count = 0;
while (*s != '\0')
{
count++;
s++;
}
return (count);
}

/**
 *__strcmp - convert a string to an integer.
 * @s1: string one
 *
 * @s2: string two
 *
 * Return: string
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;
while (*src != '\0' && i < n)
{
dest[i] = *src;
src++;
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
