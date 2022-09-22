#include "main.h"
/**
 *reverse_array - convert a string to an integer.
 * @a: array
 *
 * @n: size of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
int i = 0;
int s = (n - 1);
int e = 0;
while (i < s)
{
e = a[i];
a[i] = a[s];
a[s] = e;
i++;
s--;
}
}
