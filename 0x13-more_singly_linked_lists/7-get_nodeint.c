#include "lists.h"

/**
 * listint_len - Prints all the elements of a list_t list.
 * @h: The list_t list.
 *
 * Return: The number of nodes in h.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

/**
 * get_nodeint_at_index - Prints all the elements of a list_t list.
 * @head: The list_t list.
 * @index: index
 * Return: void.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
size_t len;
unsigned int i = 0;
if (head == NULL)
{
return (NULL);
}
len = listint_len(head);
if (index >= len)
{
return (NULL);
}
while (i < index)
{
head = (*head).next;
i++;
}
return (head);
}
