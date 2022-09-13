#include "main.h"

/**
* times_table - print 9 times table
*
* Parameters: none
*
*
* Return: void
*/

void times_table(void)
{
int tArr[10][10];
int i;
int j;
int t;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
t = (i * j);  
_putchar(t + '0')  
}
_putchar ('\n');
}
}
