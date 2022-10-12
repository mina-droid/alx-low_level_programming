#include <stdlib.h>
#include "function_pointers.h"

/**
*array_iterator-dog init
*@array:array
*@size:array size
*@action:function to be called
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || action == NULL)
{
return;
}
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
