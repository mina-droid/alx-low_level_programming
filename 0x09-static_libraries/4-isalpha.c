#include "main.h"

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
