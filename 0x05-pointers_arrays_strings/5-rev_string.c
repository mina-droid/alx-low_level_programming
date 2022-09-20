#include "main.h"

/**
* swap_chars-swaps the values of two integers
*
* @a: int pointer1
*
* @b: int pointer2
*
* Return: void
*/

void swap_chars(char *a, char *b)
{
char tmp = *a;
*a = *b;
*b = tmp;
}

/**
* _strlen-swaps the values of two integers
*
* @s: string
*
* Return: int
*/

int _strlen(char *s)
{
int count = 0;
while (*s != '\0')
{
count++;
s++;
}
return (count);
}

/**
* rev_string- prints a string, in reverse followed by a new line
*
* @s: string
*
* Return: void
*/

void rev_string(char *s)
{
int strL = _strlen(s);
int i;
char *c = &s[strL];
while (*s != *c)
{
swap_chars(s,c);
s++;
c++;
}
}
