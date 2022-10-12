#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "calc.h"

/**
*main-function
*@argc:intger 1
*@argv:array of strings
*/

int main(int argc, char *argv[])
{
int num1, num2, res;
int (*reqfunc)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
if ((*argv[2] == '%' && num2 == 0) || (*argv[2] == '/' && num2 == 0))
{
printf("Error\n");
exit(100);
}
reqfunc = get_op_func(argv[2]);
if (!reqfunc)
{
printf("Erorr\n");
exit(99);
}
res = reqfunnc(num1, num2);
printf("%d\n", res);
}
