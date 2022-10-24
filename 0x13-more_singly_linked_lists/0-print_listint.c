#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list_t list.
 *
 * Return: The number of nodes in h.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{

		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
