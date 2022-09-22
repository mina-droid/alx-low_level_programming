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
 *_strncpy - convert a string to an integer.
 * @dest: string one
 *
 * @src: string two
 *
 * @n: number of bytes to be copied
 *
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
int dest_len = _strlen(dest);
int i = 0;
while (*src != '\0' && i < n)
{
dest[i] = *src;
src++;
i++;
}
if (*src == '\0')
{
dest[i] = '\0';
for (; i < dest_len; i++)
{
if (i >= 90 && i <= 96)
{
continue;
}
dest[i] = '\0';
}
}
return (dest);
}
