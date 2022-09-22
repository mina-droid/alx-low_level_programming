#include "main.h"
/**
* _islower - checks if a character is lowercase or not
*
* Parameters: Takes a char or int
*
* @c: a char or int
*
* Return: (1) if it is lower (0) otherwise
*/

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}

/**
* _isalpha - checks if a character is from the alphabet or not
*
* Parameters: Takes a char or int
*
* @c: a char or int
*
* Return: (1) if it is alphabet (0) otherwise
*/

int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);
}
}

/**
 *cap_string - convert a string to an integer.
 * @s: string
 * Return: void
 */

char *cap_string(char *s)
{
int i = 0;
if (_islower(s[i]))
{
s[i] = s[i] - 32;
}
while (s[i] != '\0')
{
if (s[i] == '\n' || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == ';' || s[i] == ',' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}' || s[i] == '"')
{
if (_isalpha(s[i + 1]) && _islower(s[i + 1]))
{
s[i + 1] = s[i + 1] - 32;
}
}
}
return (s);
}
