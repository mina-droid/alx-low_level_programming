#include "main.h"

/**
 *leet - convert a string to an integer.
 * @s: string
 * Return: void
 */

char *leet(char *s)
{
int lowerCase [] = {97, 101, 111, 116, 108};
int upperCase [] = {65, 69, 79, 84, 76};
int numbersArr [] = {52, 51, 48, 55, 49};
int i;
int j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 5; j++)
{
if (s[i] == lowerCase[j] || s[i] == upperCase[j])
{
s[i] = numbersArr[j];
}
}
}
return (s);
}
