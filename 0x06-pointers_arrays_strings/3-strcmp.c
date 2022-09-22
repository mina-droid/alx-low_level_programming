#include "main.h"

/**
 *__strcmp - convert a string to an integer.
 * @s1: string one
 *
 * @s2: string two
 *
 * Return: string
 */
int _strcmp(char *s1, char *s2)

{

char *str_one = s1;
char *str_two = s2;


while (*str_one != '\0' && *str_two != '\0' && *str_one == *str_two)
{
str_one++;
str_two++;
}

return (*str_one - *str_two);
}
