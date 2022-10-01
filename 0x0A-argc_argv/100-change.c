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
int cent, counter = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
cent = atoi(argv[1]);
if (cent < 0)
{
printf("%d\n", 0);
return (0);
}
while (cent > 0)
{
if (cent >= 25)
{
cent -= 25;
counter ++;
}
else if (cent >= 10)
{
cent -= 10;
counter ++;
}
else if (cent >= 5)
{
cent -= 5;
counter ++;
}
else if (cent >= 2)
{
cent -= 2;
counter ++;
}
else if (cent >= 1)
{
cent -= 1;
counter ++;
}
}
printf("%d\n", counter);
return (0);
}
