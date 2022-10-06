#include <stdlib.h>
#include "main.h"
/**
 *array_range - array for prints a string
 *@min: number of memory
 *@max: number of memory
 *Return: void
 */

int *array_range(int min, int max)
{
int *ptr;
int i = 0;
int size;
if (min > max)
{
return (NULL);
}
size = max - min;
ptr = malloc((size + 1) * sizeof(int));
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < size + 1 && min <= max; i++)
{
ptr[i] = min;
min++;
}
return (ptr);
}
