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
 *_strcat - convert a string to an integer.
 * @dest: string one
 *
 * @src: string two
 *
 * Return: string
 */

char *_strcat(char *dest, char *src, int n)
{
int dest_len = _strlen(dest);
int i = 0;
while (*src != '\0' && i < n)
{
dest[dest_len] = *src;
dest_len++;
src++;
i++;
}
dest[dest_len] = '\0';
return (dest);
}
