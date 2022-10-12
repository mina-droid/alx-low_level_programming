#include "function_pointers.h"

/**
*print_name-dog init
*@f:function
*@name:person name
*/

void print_name(char *name, void (*f)(char *))
{
f(name);
}
