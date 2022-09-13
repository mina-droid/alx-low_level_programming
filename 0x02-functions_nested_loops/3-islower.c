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
