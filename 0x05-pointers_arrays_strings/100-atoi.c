#include "main.h"
/**
 * _isdigit - checks for upper case charchter
 *
 * @c: the ascii number of the digit
 * Return: 1 if digit 0 otherwise .
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}

/**
* _atoi-prints a string followed by a new line, to stdout
*
* @s: string
*
* Return: the intger of that string
*/

int _atoi(char *s)
{
int res = 0;
int sign = 1;
int i = 0;
for (; s[i] != '\0'; i++)
{
if (_isdigit(s[i]) && s[i - 1] == '-')
{
sign = -1;
}
res = res * 10 + s[i] - '0';
return sign * res;
}
}
