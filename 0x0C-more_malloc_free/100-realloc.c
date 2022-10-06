#include <stdlib.h>
#include "main.h"
/**
 *_realloc - array for prints a string
 *@ptr: number of memory
 *@old_size: number of memory
 *@new_size: number of memory
 *Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *tmpPtr;
unsigned int i;
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
ptr = malloc(new_size);
return (ptr);
}
if (new_size == old_size)
{
return (ptr);
}
tmpPtr = malloc(new_size);
if (tmpPtr == NULL)
{
return (NULL);
}
for (i = 0; i < (old_size || i < new_size); i++)
{
*(tmpPtr + i) = ptr[i];
}
free(ptr);
ptr = tmpPtr;
free(tmpPtr);
return (ptr);
}
