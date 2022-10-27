#include "main.h"

/**
 * binary_to_uint - Prints all the elements of a listint_t list.
 * @b: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int res;
if (!b)
{
return (0);
}
for (i = 0; b[i]; i++)
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
}
res = 2 * res + (b[i] - '0');
}
return (res);
}
