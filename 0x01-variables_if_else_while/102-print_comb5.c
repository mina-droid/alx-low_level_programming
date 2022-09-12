#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
int j;
int k;
int l;
int c;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
for (k = 0; k < 10; k++)
{
if (k > 1)
{
 c = -1;
}
else
{
c = j;
}
for (l = c + 1; l < 10; l++)
{
putchar(i + '0');
putchar(j + '0');
putchar(' ');  
putchar(k + '0');
putchar(l + '0');  
if (i == 9 && j == 8 && k == 9 && l == 9)
{
continue;
}
putchar(',');
putchar(' ');  
}
}
}
}
putchar('\n');
return (0);
}
