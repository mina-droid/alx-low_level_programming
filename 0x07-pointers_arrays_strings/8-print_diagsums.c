#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - encodes a string using rot13
 * @a: input string.
 *
 * @size: input string.
 *
 * Return: the pointer to dest.
 */

void print_diagsums(int *a, int size)
{
int i = 0;
int *n;
int *n2;
int k;
int sum1 = 0;
int sum2 = 0;
k = size - 1;
while (i < size)
{
n = (a + i * size + i);
sum1 += *n;
n2 = (a + i * size + k - i);
sum2 += *n2;
i++;
}
printf("%d, %d\n", sum1, sum2);
}
