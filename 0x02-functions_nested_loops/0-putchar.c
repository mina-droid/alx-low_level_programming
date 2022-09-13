#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char *ch = '_putchar';
while (*ch != '\0')
{
 putchar(*ch);
 ch++;
}  
putchar('\n');
return (0);
}
