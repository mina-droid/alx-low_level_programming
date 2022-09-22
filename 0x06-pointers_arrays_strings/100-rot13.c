#include "main.h"


/**
 *rot13 - convert a string to an integer.
 * @s: string
 * Return: char pointer
 */

char *rot13(char *s)
{
int i = 0;
while (s[i] != '\0')
{
if (_isalpha(s[i]))
{
s[i] = s[i] + 13;
}
}
return (s);
}
