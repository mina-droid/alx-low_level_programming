#include "main.h"
#include <limits.h>
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
int sign = 1, base = 0, i = 0;
while (s[i] == ' ')
{
i++;
}
while (s[i] != '\0')
{
if (s[i] == '-' || s[i] == '+')
{
sign = 1 - 2 * (s[i++] == '-');
}
if (_isdigit(s[i]))
{
if (base > INT_MAX / 10
|| (base == INT_MAX / 10
&& s[i] - '0' > 7))
{
if (sign == 1)
return INT_MAX;
else
return INT_MIN;
}
base = 10 * base + (s[i++] - '0');
}
}
if (base == 0)
{
return (0);
}
return base * sign;
}
