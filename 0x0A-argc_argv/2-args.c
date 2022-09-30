#include "main.h"
#include <stdio.h>
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
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
