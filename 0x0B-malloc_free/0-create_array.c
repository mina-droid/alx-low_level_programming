#include "main.h"
#include <stdlib.h>

/**
 * create_array - function
 *@size: length of argv
 *@c: number of argument
 *Return: Always 0
 */

char *create_array(unsigned int size, char c)
{
int i;
if (size == 0)
{
return (NULL);
}
char *s = malloc(sizeof(char) * size);
if (s == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
s[i] = c;
}
return (s);
}
