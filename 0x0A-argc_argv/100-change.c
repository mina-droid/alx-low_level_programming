#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 *@argc: length of argv
 *@argv: number of argument
 *Return: Always 0
 */

int main (int argc, char *argv[])
{
int cent, counter;
counter = 0;
if (argc != 2)
{
printf ("Error\n");
return (1);
}
cent = atoi (argv[1]);
if (cent < 0)
{
printf("0\n");
return (0);
}
while (cent > 0)
{
if (cent >= 25)
{
cent -= 25;
counter++;
}
else if (cent >= 10)
{
cent -= 10;
counter++;
}
else if (cent >= 5)
{
cent -= 5;
counter++;
}
else if (cent >= 2)
{
cent -= 2;
counter++;
}
else if (cent >= 1)
{
cent -= 1;
counter++;
}
}
printf ("%d\n", counter);
return (0);
}
