#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - encodes a string using rot13
 * @argc: arguments number.
 *
 * @argv: array of arguments.
 *
 * Return: the pointer to dest.
 */

int main(int argc, char *argv[])
{
int n1, n2;
if (argc < 3)
{
printf("Error\n");
return (1);
}
n1 = atoi(argv[1]);
n2 = atoi(argv[2]);
printf("%d\n", n1 * n2);
return (0);
}
