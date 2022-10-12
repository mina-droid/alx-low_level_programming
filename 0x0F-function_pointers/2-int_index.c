#include <stdlib.h>
#include "function_pointers.h"

/**
*int_index-dog init
*@array:array
*@size:array size
*@cmp:function to be called
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || cmp == NULL)
{
return (-1);
}
if (size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
return (-1);
}
