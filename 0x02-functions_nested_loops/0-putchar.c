#include <stdio.h>
#include "main.h"

/**
 * _putchar - Entry point
 *
 * Return: Always 0 (Success)
 */

void _putchar (void)
{
char *ch = '_putchar';
while (*ch != '\0')
{
 putchar(*ch);
 ch++;
}  
putchar('\n');
}
