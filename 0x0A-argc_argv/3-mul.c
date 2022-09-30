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
if (argc < 3)
{
printf("Error");
return (1);
}
return (argv[1] * argv [2]);
}
