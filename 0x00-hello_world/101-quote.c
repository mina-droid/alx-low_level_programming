#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char str[60]="and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
fwrite(str,59,1,stderr);
return (1);
}
