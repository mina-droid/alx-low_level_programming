#include <stdlib.h>
#include "main.h"
/**
 *_calloc - array for prints a string
 *@nmemb: number of memory
 *@size: number of memory
 *Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < nmemb * size; i++)
{
ptr[i] = 0;
}
return (ptr);
}
