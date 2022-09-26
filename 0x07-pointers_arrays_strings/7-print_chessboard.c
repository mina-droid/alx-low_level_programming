#include "main.h"

/**
 * print_chessboard - encodes a string using rot13
 * @a: input string.
 *
 * Return: the pointer to dest.
 */

void print_chessboard(char (*a)[8])
{
int i;
int j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
putchar(a[i][j]);
if (j == 7)
{
putchar('\n');
}
}
}
}
