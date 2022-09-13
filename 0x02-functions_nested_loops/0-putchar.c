#include <stdio.h>
#include "main.h"

/**
 * _putchar - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i = 0;
char ch[] = "_putchar";
while (ch[i] != '\0')
{
_putchar(ch[i]);
i++;
}
putchar('\n');
return (0);
}
