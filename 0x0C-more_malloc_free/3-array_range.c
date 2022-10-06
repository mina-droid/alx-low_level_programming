#include <stdlib.h>
#include "main.h"
/*
*array_range-allocate space
*@min:intger
*@max:intger
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
if (min == max)
{
ptr = malloc(1);
ptr[i] = min;
return (ptr);
}
size = max - min;
ptr = malloc((size + 1) * sizeof(int));
if (ptr == NULL)
{
return (NULL);
}
printf ("size = %d\n", size);
for (i = 0; i < size + 1 && min <= max; i++)
{
ptr[i] = min;
min++;
}
return (ptr);
}
