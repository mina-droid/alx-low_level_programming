#include <stdlib.h>
#include "main.h"
/*
*_calloc-allocate space
*@nmemb:intger
*@size:intger
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
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
