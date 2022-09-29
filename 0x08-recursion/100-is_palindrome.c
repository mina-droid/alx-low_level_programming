#include "main.h"

/**
 *_evaluate - evaluate function sqrt
 *@i: interger
 *@n: interger
 *Return: evaluate sqrt
 */

int _evaluate(char *start, char *end, char *s)
{
if (*start != *end)
{
return (0);
}
else if (start >= end)
{
return (1);
}

else
{
start++;
end--;
return (_evaluate(start, end, s));
}

}

/**
 *_strlen_recursion - encodes a string using rot13
 * @s: input string.
 *
 * Return: the pointer to dest.
 */

int _strlen_recursion(char *s)

{
if (*s == '\0')
{
return (0);
}

return (1 + _strlen_recursion(s + 1));

}

/**
 *is_palindrome - encodes a string using rot13
 * @s: input string.
 *
 * Return: the pointer to dest.
 */

int is_palindrome(char *s)

{
char *start;
char *end;
int len = _strlen_recursion(s);
start = s;
end = &s[len - 1];
if (*s == '\0')
{
return (1);
}
else if (len == 1)
{
return (1);
}
else
{
return(_evaluate(start, end, s));
}
}
