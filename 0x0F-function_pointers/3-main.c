#include <stdlib.h>
#include <stdio.h>
#include "calc.h"

/**
*op_add-dog init
*@a:intger 1
*@b:intger 2
*/

int main(int argc, char **argv)
{
int num1, num2, res;
if (argc < 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
if (argv[2][0] != 37 && argv[2][0] != 42 && argv[2][0] != 43 && argv[2][0] != 45 && argv[2][0] != 47)
{
printf("Error\n");
exit(99);
}
if ((argv[2][0] == 37 && num2 == 0) || (argv[2][0] == 47 && num2 == 0))
{
printf("Error\n");
exit(100);
}
res = get_op_func(argv[2](num1, num2));
printf("%d\n", res);
}
