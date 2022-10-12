#include <stdlib.h>
#include <string.h>
#include "calc.h"

/**
*get_op_func-init
*@s:op
*@a:intger 1
*@b:intger 1
*/

int (*get_op_func(char *s))(int a, int b)
{
op_t ops[] = 
{
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
i = 0;
while (i < 5)
{
if (s != NULL && strcmp(s, ops[i].op) == 0)
{
return (ops[i].f(a, b));
}
}
return (NULL);
}
